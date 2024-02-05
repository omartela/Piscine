/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omartela <omartela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 09:42:43 by omartela          #+#    #+#             */
/*   Updated: 2024/01/22 18:26:55 by omartela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		counter += 1;
	}
	return (counter);
}

/*
#include <stdio.h>
int	main(void)
{
	int i;
	char *str;

	str = "test";
	i = 0;
	i = ft_strlen(str);
	printf("%d", i);
}*/
