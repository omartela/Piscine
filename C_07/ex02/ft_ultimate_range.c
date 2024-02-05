/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omartela <omartela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 09:47:51 by omartela          #+#    #+#             */
/*   Updated: 2024/02/01 10:14:01 by omartela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*ptr;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	ptr = (int *)malloc(sizeof(int) * (max - min));
	if (ptr == NULL)
	{
		return (-1);
	}
	else
	{
		i = 0;
		while (i < max - min)
		{
			ptr[i] = min + i;
			++i;
		}
		*range = ptr;
		return (i);
	}
}
/*
#include <stdio.h>
int main(void)
{
	int *range;
	int max;
	int min;
	int i;

	i = 0;
	max = 40;
	min = 20;

	ft_ultimate_range(&range, min, max);

	while (i < (max - min))
	{
		printf("%d", *range);
		++*range;
		++i;
	}
}*/
