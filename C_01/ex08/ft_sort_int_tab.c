/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omartela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 11:05:36 by omartela          #+#    #+#             */
/*   Updated: 2024/01/14 13:08:58 by omartela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_sort_int_tab(int *tab, int size)
{
	int	next;
	int	previous;
	int	i;

	i = 0;
	while (i < size - 1)
	{
		next = tab[i + 1];
		previous = tab[i];
		if (previous > next)
		{
			tab[i + 1] = previous;
			tab[i] = next;
			i = 0;
		}
		else
		{
			i = i + 1;
		}
	}
}
