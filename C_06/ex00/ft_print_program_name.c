/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omartela <omartela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 17:56:25 by omartela          #+#    #+#             */
/*   Updated: 2024/01/28 12:44:07 by omartela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;

	i = argc;
	while (*argv[0])
	{
		write(1, argv[0], 1);
		++argv[0];
	}
	write(1, "\n", 1);
}
