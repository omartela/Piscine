/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omartela <omartela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 14:30:00 by omartela          #+#    #+#             */
/*   Updated: 2024/01/29 17:48:59 by omartela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_stock_str.h"
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*str;
	char	*p;
	int		len;

	len = 0;
	while (src[len])
	{
		len++;
	}
	str = malloc(len + 1);
	if (!(str))
	{
		return (0);
	}
	p = str;
	while (*src)
	{
		*p++ = *src++;
	}
	*p = '\0';
	return (str);
}

int	ft_strlen(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		counter += 1;
	}
	return (counter);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*t_struct;
	int			i;

	i = 0;
	t_struct = malloc(sizeof(t_stock_str) * (ac + 1));
	if (!(t_struct))
		return (NULL);
	while (i < ac)
	{
		t_struct[i].size = ft_strlen(av[i]);
		t_struct[i].str = av[i];
		t_struct[i].copy = ft_strdup(av[i]);
		++i;
	}
	t_struct[i].size = 0;
	t_struct[i].str = 0;
	t_struct[i].copy = 0;
	return (t_struct);
}
