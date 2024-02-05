/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omartela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 14:39:41 by omartela          #+#    #+#             */
/*   Updated: 2024/01/16 12:06:42 by omartela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_is_alpha(char *str)
{
	if (*str != '\0')
	{
		if (!((*str >= 'a' && *str <= 'z') || (*str >= 'A' && *str <= 'Z')))
		{
			return (0);
		}
		else
		{
			return (1);
		}
	}
	else
	{
		return (1);
	}
	return (0);
}

char	*ft_upcase(char *str)
{
	if (*str >= 'a' && *str <= 'z')
	{
		*str -= 32;
	}
	return (str);
}

char	*ft_lowcase(char *str)
{
	if (*str >= 'A' && *str <= 'Z')
	{
		*str += 32;
	}
	return (str);
}

int	ft_is_numeric(char *str)
{
	if (*str != '\0')
	{
		if (!(*str >= '0' && *str <= '9'))
		{
			return (0);
		}
		else
		{
			return (1);
		}
	}
	else
	{
		return (1);
	}
	return (0);
}

int	ft_is_lowcase(char *str)
{
	if (*str != '\0')
	{
		if (!(*str >= 'a' && *str <= 'z'))
		{
			return(0);
		}
		else
		{
			return (1);
		}
	}
	else
	{
		return (1);
	}
}

int	ft_is_uppercase(char *str)
{
	if (*str != '\0')
	{
		if (!(*str >= 'A' && *str <= 'Z'))
		{
			return (0);
		}
		else
		{
			return (1);
		}
	}
	else
	{
		return (1);
	}
}

char *ft_middletterupcase(char *str, int i)
{
	if (ft_is_alpha(&str[i - 1]) == 1)
		{
			if (ft_is_alpha(&str[i]) == 1)
			{
				if (ft_is_uppercase(&str[i]) == 1)
				{
					ft_lowcase(&str[i]);
				}
			}
		}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 1;
	if (ft_is_alpha(str) == 1)
	{
		ft_upcase(str);
	}
	while (str[i - 1] != '\0')
	{
		if (ft_is_numeric(&str[i - 1]) == 0)
		{
			if (ft_is_alpha(&str[i - 1]) == 0)
			{
				if (ft_is_alpha(&str[i]) == 1)
				{
					if (ft_is_lowcase(&str[i]) == 1)
					{
						ft_upcase(&str[i]);
					}
				}
			}
			ft_middletterupcase(&str[i], i);
		}
		i = i + 1;
	}
	return (str);
}
