/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omartela <omartela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 15:42:01 by omartela          #+#    #+#             */
/*   Updated: 2024/01/22 17:57:52 by omartela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i = i + 1;
	}
	while (src[j] != '\0')
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
int main() {
    char dest1[20] = "Hello";
    char src1[] = "World";

    char dest2[20] = "Hello";
    char src2[] = "World";

    printf("Test 1 (ft_strcat): %s\n", ft_strcat(dest1, src1));
    printf("Test 1 (strcat): %s\n", strcat(dest2, src2));

    printf("Modified dest1: %s\n", dest1);
    printf("Modified dest2: %s\n", dest2);

    return 0;
}
*/
