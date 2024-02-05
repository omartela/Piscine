/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omartela <omartela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 15:39:26 by omartela          #+#    #+#             */
/*   Updated: 2024/01/24 15:08:45 by omartela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
	{
		return (-1);
	}
	if (index <= 1)
		return (index);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
/*
#include <stdio.h>
int	main()
{
	printf("%d = -1\n", ft_fibonacci(-20));
	printf("%d = 0\n", ft_fibonacci(0));
	printf("%d = 1\n", ft_fibonacci(1));
	printf("%d = 1\n", ft_fibonacci(2));
	printf("%d = 8\n", ft_fibonacci(6));
	printf("%d = 89\n", ft_fibonacci(11));
	printf("%d = 377\n", ft_fibonacci(14));
}*/
