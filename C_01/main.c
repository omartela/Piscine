/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omartela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 11:58:15 by omartela          #+#    #+#             */
/*   Updated: 2024/01/14 15:13:03 by omartela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
void	ft_ft(int *nbr);
void	ft_ultimate_ft(int *********nbr);
void	ft_swap(int *a,int *b);
void	ft_div_mod(int a, int b, int *div, int *mod);
void	ft_ultimate_div_mod(int *a, int *b);
void	ft_putstr(char *str);
int	ft_strlen(char *str);
void	ft_rev_int_tab(int *tab, int size);
void	ft_sort_int_tab(int *tab, int size);

int main(void)
{
	int i;
	
	ft_ft(&i);
	printf("ft_ft %d\n", i);

	int	n, *********nbr;
	int	*n1, **n2, ***n3, ****n4, *****n5, ******n6, *******n7, ********n8;

	n = 1;

	n1 = &n;
	n2 = &n1;
	n3 = &n2;
	n4 = &n3;
	n5 = &n4;
	n6 = &n5;
	n7 = &n6;
	n8 = &n7;
	nbr = &n8;

	ft_ultimate_ft(nbr);
	printf("ft_ultimate %d\n", n);

	int a = 3;
	int b = 2;

	ft_swap(&a, &b);
	printf("ft_swap %d, %d\n", a, b);
	
	int div1;
	int mod1;
	int *div = &div1;
	int *mod = &mod1;

	ft_div_mod(a, b, div, mod);

	printf("ft_div_mod %d, %d, %d, %d \n", a, b, *div, *mod);

	int *d;
	int *c;
	int d1;
	int c1;

	d = &d1;
	c = &c1;

	*c = 3;
	*d = 3;

	ft_ultimate_div_mod(d, c);

	printf("ft_ultimate_div_mod %d, %d\n", *d, *c);
	
	char *str = "Hey Hive";

	ft_putstr(str);

	int numberc;
	
	numberc = ft_strlen(str);

	printf("ft_strlen %d\n", numberc);

	int array[7] = {2, 4, -6, 5, 8, -1, 0};
	int *array_1;
	int y;

	array_1 = &array[0];

	ft_rev_int_tab(array_1, 7);
	printf("ft_rev_int_tab: \n");
	for (y = 0; y < 7; y++)
	{
		printf("%d\n", array[y]); 
	}

	int array1[7] = {3,4,1,0,0,0,1};
	int* array_2;
	int q = 0;

	array_2 = &array1[0];
	ft_sort_int_tab(array_2, 7);
	printf("ft_sort_int_tab: \n");
	for (q = 0; q < 7; q++)
	{
		printf("%d\n", array1[q]);
	}
}
