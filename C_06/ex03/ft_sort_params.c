/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omartela <omartela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 11:01:18 by omartela          #+#    #+#             */
/*   Updated: 2024/01/25 11:52:59 by omartela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	unsigned char	*p1;
	unsigned char	*p2;
	unsigned int	i;

	p1 = (unsigned char *) s1;
	p2 = (unsigned char *) s2;
	i = 0;
	while (p1[i] != '\0' && p2[i] != '\0' && p1[i] == p2[i])
	{
		i = i + 1;
	}
	return (p1[i] - p2[i]);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i += 1;
	}
	write(1, str, i);
	write(1, "\n", 1);
}

int	main(int argc, char *argv[])
{
	char		*temp;
	int			i;

	i = 1;
	while (i < argc - 1)
	{
		temp = argv[i];
		if (ft_strcmp(temp, argv[i + 1]) > 0)
		{
			argv[i] = argv[i + 1];
			argv[i + 1] = temp;
			i = 0;
		}
		i++;
	}
	i = 1;
	while (i < argc)
	{
		ft_putstr(argv[i]);
		i++;
	}
}
