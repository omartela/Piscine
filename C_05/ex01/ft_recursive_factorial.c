/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omartela <omartela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 11:09:31 by omartela          #+#    #+#             */
/*   Updated: 2024/01/24 13:38:08 by omartela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
	{
		return (0);
	}
	if (nb == 0 || nb == 1)
	{
		return (1);
	}
	return (nb * ft_recursive_factorial(nb - 1));
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