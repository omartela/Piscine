/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omartela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 11:01:48 by omartela          #+#    #+#             */
/*   Updated: 2024/01/11 20:49:13 by omartela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_write_numbers(char h, char t, char u)
{
	char	colon;
	char	space;

	space = ' ';
	colon = ',';
	write(1, &h, 1);
	write(1, &t, 1);
	write(1, &u, 1);
	if (h < '7' || (t < '8') || (u < '9'))
	{
		write(1, &colon, 1);
		write(1, &space, 1);
	}
}

void	ft_increase_numbers(char h, char t, char u)
{
	while ((h <= '7' || (t <= '8') || (u <= '9')))
	{
		ft_write_numbers(h, t, u);
		if (u != '9')
		{
			++u;
		}
		else
		{
			if (t != '8')
			{
				++t;
				u = t + 1;
			}
			else
			{
				++h;
				t = h + 1;
				u = t + 1;
			}
		}
	}
}

void	ft_print_comb(void)
{
	char	h;
	char	t;
	char	u;

	h = '0';
	t = '1';
	u = '2';
	ft_increase_numbers(h, t, u);
}
