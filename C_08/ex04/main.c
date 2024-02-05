/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omartela <omartela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 17:48:17 by omartela          #+#    #+#             */
/*   Updated: 2024/01/29 17:48:46 by omartela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>

int main(void)
{
	int ac = 4;
	char *strs1[] = {"Hello", "world", "!", "test3", "test4"};
	int i = 0;
	t_stock_str *t_struct;

	t_struct = ft_strs_to_tab(ac, strs1);

	while (i < ac + 1)
	{
		printf("%d, %s, %s\n", t_struct[i].size, t_struct[i].str, t_struct[i].copy);
		++i;
	}
	free(t_struct);
}

