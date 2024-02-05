/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omartela <omartela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 10:40:54 by omartela          #+#    #+#             */
/*   Updated: 2024/01/24 11:16:30 by omartela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		nb = 147483648;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -1 * nb;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		ft_putchar('0' + nb);
	}
}

/*
#include <stdio.h>
int main() {
    printf("Test 1: \n");
    ft_putnbr(12345);
    printf("\n");

    printf("Test 2: \n");
    ft_putnbr(-67890);
    printf("\n");

    printf("Test 3: \n");
    ft_putnbr(0);
    printf("\n");

    printf("Test 4: \n");
    ft_putnbr(2147483647);
    printf("\n");

    printf("Test 5: \n");
    ft_putnbr(-2147483648);
    printf("\n");

	printf("Test 6: \n");
    ft_putnbr(0);
    printf("\n");


    return 0;
}*/
