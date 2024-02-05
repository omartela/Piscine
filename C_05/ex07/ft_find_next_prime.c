/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omartela <omartela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 12:24:03 by omartela          #+#    #+#             */
/*   Updated: 2024/01/25 16:16:15 by omartela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	n;

	if (nb <= 1)
	{
		return (0);
	}
	n = 2;
	while (n <= nb / n && n <= 46340)
	{
		if (nb % n == 0)
		{
			return (0);
		}
		n++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb < 2)
	{
		return (2);
	}
	while (ft_is_prime(nb) == 0)
	{
		nb++;
	}
	return (nb);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%d = 2\n", ft_find_next_prime(-40));
	printf("%d = 2\n", ft_find_next_prime(0));
	printf("%d = 2\n", ft_find_next_prime(1));
	printf("%d = 2\n", ft_find_next_prime(2));
	printf("%d = 3\n", ft_find_next_prime(3));
	printf("%d = 79\n", ft_find_next_prime(75));
	printf("%d = 2147483647\n", ft_find_next_prime(2147483647));
}*/
