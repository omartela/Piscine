/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omartela <omartela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 09:00:26 by omartela          #+#    #+#             */
/*   Updated: 2024/01/11 15:05:02 by omartela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_number(void)
{
	int		n;
	char	number;

	n = 0;
	while (n < 10)
	{
		number = '0' + n;
		write(1, &number, 1);
		n += 1;
	}
}
