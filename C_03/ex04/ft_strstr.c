/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omartela <omartela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 09:10:06 by omartela          #+#    #+#             */
/*   Updated: 2024/01/22 18:10:10 by omartela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strncmp(char	*s1, char	*s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] && s2[i] && (s1[i] == s2[i]) && i < (n - 1))
		i++;
	if ((n == 0) || (s1[i] == s2[i]))
		return (0);
	else
		return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

int	ft_strlen(char *s1)
{
	int	i;

	i = 0;
	while (*s1 != '\0')
	{
		i = i + 1;
		++s1;
	}
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	char	*ptr;

	ptr = str;
	if (*to_find == '\0')
	{
		return (str);
	}
	while (*ptr != '\0')
	{
		if (ft_strncmp(ptr, to_find, ft_strlen(to_find)) == 0)
		{
			return (ptr);
		}
		++ptr;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char str3[6] = "abcd";
	char str4[3] = "bc";
	char str1[6] = "abc";
	char str2[3] = "bc";

	char *pointer;
	char *pointer1;

	pointer = ft_strstr(str3, str4);
	pointer1 = strstr(str1, str2);
	printf("created %s \n",pointer);
	printf("org %s \n", pointer1);
}
*/
