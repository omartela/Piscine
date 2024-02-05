/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omartela <omartela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 10:42:44 by omartela          #+#    #+#             */
/*   Updated: 2024/01/24 13:27:43 by omartela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;
	int	i;

	if (nb < 0)
	{
		return (0);
	}
	if (nb == 0 || nb == 1)
	{
		return (1);
	}
	result = 1;
	i = 1;
	while (i <= nb)
	{
		result = result * i;
		++i;
	}
	return (result);
}
/*
#include <stdio.h>
void test_factorial(int nb) {
    int expected = 1;
    int result = ft_iterative_factorial(nb);

    // Calculate the expected factorial value
	if (nb > 0)
	{
    	for (int i = 1; i <= nb; ++i) {
        	expected *= i;
    	}
	}
	else
	{
		expected = 0;
	}

    printf("Input: %d\n", nb);
    printf("Expected: %d\n", expected);
    printf("Result: %d\n", result);

    if (result == expected) {
        printf("Test Passed!\n");
    } else {
        printf("Test Failed!\n");
    }

    printf("\n");
}

int main() {
    // Test cases
    test_factorial(0);
    test_factorial(1);
    test_factorial(5);
    test_factorial(8);
    test_factorial(10);
	test_factorial(13);
	test_factorial(-12);

    return 0;
}*/
