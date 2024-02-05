/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omartela <omartela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 18:00:43 by omartela          #+#    #+#             */
/*   Updated: 2024/02/01 10:47:47 by omartela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*ptr;
	int	i;
	int	*start;

	start = NULL;
	i = min;
	if (min >= max)
	{
		return (NULL);
	}
	ptr = (int *) malloc(sizeof(int) * (max - min));
	if (ptr == NULL)
		return (NULL);
	if (ptr != NULL)
	{
		start = ptr;
		while (i < max)
		{
			*ptr = i;
			++i;
			++ptr;
		}
	}
	return (start);
}
/*
#include <stdio.h>
int    main(void)
{
    int i;
    int *pointer;

    i = 0;
    pointer = ft_range(20, 40);
    while (i < 20)
    {
        printf("%d", pointer[i]);
        i++;
    }
}*/
