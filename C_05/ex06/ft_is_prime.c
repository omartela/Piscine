/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omartela <omartela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 11:42:36 by omartela          #+#    #+#             */
/*   Updated: 2024/01/25 16:19:17 by omartela         ###   ########.fr       */
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
/*
#include <stdio.h>
int main()
{
	printf("%d = 0\n", ft_is_prime(-40));
	printf("%d = 0\n", ft_is_prime(0));
	printf("%d = 0\n", ft_is_prime(1));
	printf("%d = 1\n", ft_is_prime(2));
	printf("%d = 1\n", ft_is_prime(3));
	printf("%d = 0\n", ft_is_prime(82));
	printf("%d = 0\n", ft_is_prime(361));
	printf("%d = 1\n", ft_is_prime(2147483647));
}*/
