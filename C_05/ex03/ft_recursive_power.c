/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omartela <omartela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 15:27:29 by omartela          #+#    #+#             */
/*   Updated: 2024/01/24 15:04:58 by omartela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
	{
		return (0);
	}
	if (power == 0)
	{
		return (1);
	}
	if (nb == 0 && power == 0)
	{
		return (1);
	}
	if (power > 0)
	{
		return (nb * ft_recursive_power(nb, power - 1));
	}
	else
	{
		return (1);
	}
}
/*
#include <stdio.h>
int main()
{
	printf("%d = 0\n", ft_recursive_power(3, -1));
	printf("%d = -27\n", ft_recursive_power(-3, 3));
	printf("%d = 1\n", ft_recursive_power(3, 0));
	printf("%d = 3\n", ft_recursive_power(3, 1));
	printf("%d = 9\n", ft_recursive_power(3, 2));
	printf("%d = 243\n", ft_recursive_power(3, 5));
}*/
