/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_buf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsansa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 05:07:37 by gsansa            #+#    #+#             */
/*   Updated: 2020/03/15 10:21:58 by gsansa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftlib.h"

int		ft_buf3(char *str)
{
	int i;
	int buf_3;

	buf_3 = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] == '*') || (str[i] == '/') || (str[i] == '%')
				|| (str[i] == '+') || ((str[i] == '-') && (str[i + 1] == ' '))
				|| (str[i] == 40) || (str[i] == 41))
			buf_3 = 1;
		i++;
	}
	if (buf_3 == 0)
		return (1);
	return (0);
}

int		ft_buf(char *str, int n_scob, int k_scob)
{
	int n;
	int buf;

	n = n_scob;
	buf = 0;
	while (n != k_scob)
	{
		if ((str[n] == '*') || (str[n] == '/') || (str[n] == '%'))
			buf = 1;
		n++;
	}
	if (buf == 1)
		return (1);
	return (0);
}

int		buf2(char *str, int n_scob, int k_scob)
{
	int	i;
	int buf_2;

	i = n_scob;
	buf_2 = 0;
	while (i != k_scob)
	{
		if (str[i] == ' ')
			buf_2 = 1;
		i++;
	}
	if (buf_2 == 0)
	{
		str = ft_new_str(str, n_scob, k_scob, ft_atoi(str + n_scob + 1));
		return (1);
	}
	return (0);
}
