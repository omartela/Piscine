/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omartela <omartela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 13:00:01 by omartela          #+#    #+#             */
/*   Updated: 2024/01/24 15:03:07 by omartela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = 1;
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
	while (power > 0)
	{
		result = result * nb;
		--power;
	}
	return (result);
}
/*
#include <stdio.h>
int main()
{
	printf("%d = 0\n", ft_iterative_power(3, -1));
	printf("%d = -27\n", ft_iterative_power(-3, 3));
	printf("%d = 1\n", ft_iterative_power(3, 0));
	printf("%d = 3\n", ft_iterative_power(3, 1));
	printf("%d = 9\n", ft_iterative_power(3, 2));
	printf("%d = 243\n", ft_iterative_power(3, 5));
}*/
