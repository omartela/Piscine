/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omartela <omartela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 10:02:44 by omartela          #+#    #+#             */
/*   Updated: 2024/02/01 10:51:38 by omartela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

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

char	*ft_join(char *string, char **strs, char *sep, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		ft_strcat(string, strs[i]);
		if (i < (size - 1))
		{
			ft_strcat(string, sep);
		}
		i++;
	}
	return (string);
}

char	*ft_strjoin(int size, char	**strs, char	*sep)
{
	int		i;
	char	*string;
	int		nofchar;
	int		seplen;

	i = 0;
	nofchar = 0;
	seplen = ft_strlen(sep);
	while (i < size)
	{
		nofchar += ft_strlen(strs[i]);
		i = i + 1;
	}
	if (size == 0)
	{
		string = malloc(sizeof(char));
		*string = 0;
		return (string);
	}
	string = (char *)malloc(nofchar + (size - 1) * seplen + 1);
	if (string == NULL)
		return (NULL);
	*string = 0;
	ft_join(string, strs, sep, size);
	return (string);
}
/*
#include <stdio.h>
int main(void)
{
    // Test 1: Basic concatenation
    char *strs1[] = {"Hello", "world", "!", "test3", NULL};
    char *sep1 = ", ";
    char *result_str1 = ft_strjoin(4, strs1, sep1);
    printf("Test 1: %s\n", result_str1);  // Expected output: Hello, world!

    // Free memory allocated by ft_strjoin
    free(result_str1);

    // Test 2: Empty strings
    char *strs2[] = {"Hello", "test", "sss", NULL};
    char *sep2 = "-";
    char *result_str2 = ft_strjoin(4, strs2, sep2);
    printf("Test 2: %s\n", result_str2);  // Expected output: -

    // Free memory allocated by ft_strjoin
    free(result_str2);

    // Test 3: No strings (size is 0)
    char *strs3[] = {NULL};
    char *sep3 = "-";
    char *result_str3 = ft_strjoin(0, strs3, sep3);
    printf("Test 3: %s\n", result_str3);  // Expected output: ""

    // Free memory allocated by ft_strjoin
    free(result_str3);

    // Test 4: Separator only
    char *strs4[] = {NULL};
    char *sep4 = "-";
    char *result_str4 = ft_strjoin(0, strs4, sep4);
    printf("Test 4: %s\n", result_str4);  // Expected output: ""

    // Free memory allocated by ft_strjoin
    free(result_str4);

    return 0;
}*/
