/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omartela <omartela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 17:15:22 by omartela          #+#    #+#             */
/*   Updated: 2024/01/25 14:37:37 by omartela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	counter;
	int	decrease;

	counter = 0;
	decrease = 1;
	while (nb >= 0)
	{
		nb = nb - decrease;
		decrease = decrease + 2;
		counter += 1;
		if (nb == 0)
		{
			return (counter);
		}
	}
	return (0);
}
/*
#include <stdio.h>
int main()
{
	printf("%d = 0\n", ft_sqrt(-40));
	printf("%d = 0\n", ft_sqrt(0));
	printf("%d = 1\n", ft_sqrt(1));
	printf("%d = 0\n", ft_sqrt(2));
	printf("%d = 0\n", ft_sqrt(3));
	printf("%d = 2\n", ft_sqrt(4));
	printf("%d = 5\n", ft_sqrt(25));
	printf("%d = 9\n", ft_sqrt(81));
	printf("%d = 60\n", ft_sqrt(3600));
	printf("%d = 46340\n", ft_sqrt(2147395600));
}*/
