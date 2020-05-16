/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_znak.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsansa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 05:19:54 by gsansa            #+#    #+#             */
/*   Updated: 2020/03/15 14:23:02 by gsansa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftlib.h"

int		ft_mul_div_mod_2(char *str, int i, int j)
{
	if (str[i] == '/')
	{
		str = ft_new_str(str, (i - j - 1),
				(i + 1 + ft_len_chisla((ft_atoi(str + i + 2)))),
				((ft_atoi(str + i - j - 1)) / (ft_atoi(str + i + 2))));
		return (1);
	}
	else if (str[i] == '%')
	{
		str = ft_new_str(str, (i - j - 1),
				(i + 1 + ft_len_chisla((ft_atoi(str + i + 2)))),
				((ft_atoi(str + i - j - 1)) % (ft_atoi(str + i + 2))));
		return (1);
	}
	return (0);
}

int		ft_mul_div_mod_3(char *str, int i)
{
	int j;

	j = 0;
	while ((str[i - j - 2] != ' ') && (str[i - j - 2] != 40)
			&& (str[i - j - 2] != 41) && (str[i - j - 2] != '\0'))
		j++;
	return (j);
}

int		ft_mul_div_mod(char *str, int i)
{
	int j;

	if ((str[i] == '*') || (str[i] == '/') || (str[i] == '%'))
	{
		j = ft_mul_div_mod_3(str, i);
		if (str[i] == '*')
		{
			str = ft_new_str(str, (i - j - 1),
					(i + 1 + ft_len_chisla(ft_atoi(str + i + 2))),
					((ft_atoi(str + i - j - 1)) * (ft_atoi(str + i + 2))));
			return (1);
		}
		else if (ft_mul_div_mod_2(str, i, j) == 1)
			return (1);
	}
	return (0);
}

int		ft_sum_min(char *str, int i, int buf)
{
	int j;

	if (((str[i] == '+') || (str[i] == '-' && str[i + 1] == ' ')) && (buf != 1))
	{
		j = 0;
		while ((str[i - j - 2] != ' ') && (str[i - j - 2] != 40)
				&& (str[i - j - 2] != 41) && (str[i - j - 2] != '\0'))
			j++;
		if (str[i] == '+')
		{
			str = ft_new_str(str, (i - j - 1),
					(i + 1 + ft_len_chisla(ft_atoi(str + i + 2))),
					(ft_atoi(str + i - j - 1) + ft_atoi(str + i + 2)));
			return (1);
		}
		else if (str[i] == '-' && str[i + 1] == ' ')
		{
			str = ft_new_str(str, (i - j - 1),
					(i + 1 + ft_len_chisla(ft_atoi(str + i + 2))),
					(ft_atoi(str + i - j - 1) - ft_atoi(str + i + 2)));
			return (1);
		}
	}
	return (0);
}
