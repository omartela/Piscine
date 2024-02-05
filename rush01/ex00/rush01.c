/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlehtone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 10:05:22 by jlehtone          #+#    #+#             */
/*   Updated: 2024/01/13 14:32:39 by jmakkone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_write_o(int x, int y, int i, int j)
{
	if (i == 0 && j == 0)
	{
		ft_putchar('/');
	}
	else if (i == x -1 && j == 0)
	{
		ft_putchar('\\');
	}
	else if (i == 0 && j == y -1)
	{
		ft_putchar('\\');
	}
	else if (i == x -1 && j == y -1)
	{
		ft_putchar('/');
	}
}

void	ft_write_dash_space(int x, int y, int i, int j)
{
	if ((i > 0 && i < x -1) && (j == 0 || j == y -1))
	{
		ft_putchar('*');
	}
	else if ((i != 0 && i != x -1) && (j != 0 && j != y -1))
	{
		ft_putchar(' ');
	}
}

void	ft_write_pipe(int x, int y, int i, int j)
{
	if ((j > 0 && j < y -1) && (i == 0 || i == x -1))
	{
		ft_putchar('*');
	}
}

void	rush(int x, int y)
{
	int	i;
	int	j;

	j = 0;
	while (j < y && x > 0)
	{
		i = 0;
		while (i < x)
		{
			ft_write_o(x, y, i, j);
			ft_write_dash_space(x, y, i, j);
			ft_write_pipe(x, y, i, j);
			++i;
		}
		++j;
		ft_putchar('\n');
	}
}
