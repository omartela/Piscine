/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omartela <omartela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 19:07:10 by omartela          #+#    #+#             */
/*   Updated: 2024/01/24 11:02:23 by omartela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_write_number(int nbr, int ln_base)
{
	char	c;

	if (nbr == -2147483648)
	{
		write(1, "-", 1);
		write(1, "2", 1);
		nbr = 147483648;
	}
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr = -nbr;
	}
	c = '0' + nbr % ln_base;
	if (nbr >= ln_base)
	{
		nbr = nbr / ln_base;
		ft_write_number(nbr, ln_base);
	}
	else
	{
		write(1, &c, 1);
		return ;
	}
	write(1, &c, 1);
}

int	char_twice(char *base)
{
	int	i;
	int	j;
	int	twice;

	i = 0;
	j = 0;
	twice = 0;
	while (base[i] != '\0')
	{
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
			{
				twice += 1;
			}
			j++;
		}
		i++;
	}
	if (twice > 1)
		return (1);
	return (0);
}

int	check_display(char *base)
{
	int	i;

	i = 0;
	if (base[0] == '\0')
	{
		return (0);
	}
	while (base[i] != '\0')
	{
		if (base[i] == '-' || base[i] == '+' || base[i] == ' ')
		{
			return (0);
		}
		i++;
	}
	if (i <= 1)
	{
		return (0);
	}
	if (char_twice(base) == 1)
	{
		return (0);
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	ln_base;
	int	i;

	ln_base = 0;
	i = 0;
	if (check_display(base) == 1)
	{
		while (base[i] != 0)
		{
			i++;
		}
		ln_base = i;
		ft_write_number(nbr, ln_base);
	}
}
/*
#include <stdio.h>
void test_ft_putnbr_base(int nbr, char *base) {
    printf("Base: \"%s\"\n", base);
    printf("Number: %d\n", nbr);
    ft_putnbr_base(nbr, base);
    printf("\n\n");
}

int main() {
    test_ft_putnbr_base(42, "0123456789");
    test_ft_putnbr_base(-42, "0123456789");
    test_ft_putnbr_base(42, "01");
    test_ft_putnbr_base(42, "0123456789ABCDEF");
    test_ft_putnbr_base(42, "poneyvif");
    test_ft_putnbr_base(42, "");
    test_ft_putnbr_base(42, "11");
    test_ft_putnbr_base(42, "012+345");
	test_ft_putnbr_base(-2147483648, "0123456789");

    return 0;
}*/
