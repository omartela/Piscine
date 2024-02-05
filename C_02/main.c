/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omartela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 16:19:14 by omartela          #+#    #+#             */
/*   Updated: 2024/01/17 15:44:12 by omartela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

char 	*ft_strcpy(char *dest, char *src);
char	*ft_strncpy(char *dest, char *src, unsigned int n);
int	ft_str_is_alpha(char *str);
int	ft_str_is_numeric(char *str);
int ft_str_is_lowercase(char *str);
int ft_str_is_uppercase(char *str);
int ft_str_is_printable(char *str);
char *ft_strupcase(char *str);
char *ft_strlowcase(char *str);

int main(void)
{
	char array1[20];
	char array2[] = "hive helsinki";

	ft_strcpy(&array1[0], &array2[0]);
	printf("ft_strcpy dest %s", array1);
	printf("\n");
	
	unsigned int m;

	m = 3;
	char array5[4] = "hive";
	char array6[] = "tampere";
	ft_strncpy(&array6[0], &array5[0],m);
	printf("ft_strncpy dest %s", array6);
	printf("\n");

	int returnvalue1;
	int ralpha2;
	int ralpha3;
	char str9[5] = "ab2d";
	char str20[5] = "abc";
	char str36[5] = "";

	returnvalue1 = ft_str_is_alpha(&str9[0]);
	ralpha2 = ft_str_is_alpha(&str20[0]);
	ralpha3 = ft_str_is_alpha(&str36[0]);

	printf("ft_str_is_alpha %d, %d, %d \n", returnvalue1, ralpha2, ralpha3);

	char	str10[5] = "";
	int returnvalue2;

	returnvalue2 = ft_str_is_numeric(&str10[0]);

	printf("ft_str_is_numeric %d\n", returnvalue2);

	char str1[5] = "Abcd";
	int returnvalue3;

	returnvalue3 = ft_str_is_lowercase(&str1[0]);

	printf("ft_str_is_lowercase %d\n", returnvalue3);
	
	char str2[5] = "ABiD";
	int returnvalue4;

	returnvalue4 = ft_str_is_uppercase(&str2[0]);
	printf("ft_str_is_uppercase %d\n", returnvalue4);

	char str3[5] = {40};
	int returnvalue5;

	returnvalue5 = ft_str_is_printable(&str3[0]);
	printf("ft_str_is_printable %d\n", returnvalue5);
	
	char str4[8] = "i!hiVe";

	ft_strupcase(str4);
	printf("ft_strupcase %s\n", str4);

	char str30[5] = "HIVE";

	ft_strlowcase(str30);
	printf("ft_strlowcase %s\n", str30);
}
