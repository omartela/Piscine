/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omartela <omartela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 15:12:15 by omartela          #+#    #+#             */
/*   Updated: 2024/01/21 17:24:14 by omartela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	unsigned char	*p1;
	unsigned char	*p2;
	unsigned int	i;

	p1 = (unsigned char *) s1;
	p2 = (unsigned char *) s2;
	i = 0;
	while (p1[i] != '\0' && p2[i] != '\0' && p1[i] == p2[i])
	{
		i = i + 1;
	}
	return (p1[i] - p2[i]);
}
/*
#include <stdio.h>
#include <string.h>
int    main(void)
{
    char    str1[] = "abc";
    char    str2[] = "abcd";
    int        a;
    int        b;

    a = ft_strcmp(str1, str2);
    b = strcmp(str1, str2);
    printf("%d, %d", a, b);
}
*/
