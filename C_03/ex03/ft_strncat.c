/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omartela <omartela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 08:48:41 by omartela          #+#    #+#             */
/*   Updated: 2024/01/18 16:12:46 by omartela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	if (nb < 1)
	{
		return (dest);
	}
	while (dest[i] != '\0')
	{
		i = i + 1;
	}
	while (src[j] != '\0' && j < nb)
	{
		dest[i + j] = src[j];
		j = j + 1;
	}
	dest[i + j] = '\0';
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char str3[6] = "abc";
	char str4[3] = "ab";
	char str1[6] = "abc";
	char str2[3] = "ab";

	ft_strncat(str3, str4, 1);
	strncat(str1, str2, 1);
	printf("created %s \n",str3);
	printf("org %s \n", str1);
}*/
