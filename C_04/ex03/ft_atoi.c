/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omartela <omartela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 11:39:26 by omartela          #+#    #+#             */
/*   Updated: 2024/01/23 10:19:53 by omartela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	string_to_integer(char *str)
{
	int	result;

	result = 0;
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + (*str - '0');
		++str;
	}
	return (result);
}

int	ft_atoi(char *str)
{
	int	counter;
	int	atoi;

	counter = 0;
	while (*str == ' ' || *str == '\t' || *str == '\v'
		|| *str == '\r' || *str == '\f' || *str == '\n')
	{
		++str;
	}
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
		{
			counter += 1;
		}
		++str;
	}
	atoi = string_to_integer(str);
	if (counter % 2 != 0)
	{
		atoi = -1 * atoi;
	}
	return (atoi);
}

/*
#include <stdio.h>
void test_ft_atoi(char *str, int expected)
{
    int result = ft_atoi(str);
    printf("Input: \"%s\"\n", str);
    printf("Expected: %d\n", expected);
    printf("Actual: %d\n", result);
    printf("Result: %s\n\n", result == expected ? "PASS" : "FAIL");
}

int main()
{
    test_ft_atoi("123", 123);
    test_ft_atoi("   -456", -456);
    test_ft_atoi("789  ", 789);
    test_ft_atoi(" \r \t \f \v \n +987", 987);
    test_ft_atoi("   -0", 0);
    test_ft_atoi("   0", 0);
    test_ft_atoi("-2147483648", -2147483648);
    test_ft_atoi("2147483647", 2147483647);
    test_ft_atoi("   + 123", 0);
    test_ft_atoi("   - 456", 0);

    return 0;
}*/
