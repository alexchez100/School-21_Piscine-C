/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_expr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsansa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 03:35:29 by gsansa            #+#    #+#             */
/*   Updated: 2020/03/15 10:14:00 by gsansa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftlib.h"

int			eval_expr(char *str)
{
	char	*str_v;
	int		i;
	int		buf;

	str_v = ft_new_scob(str);
	while (1)
	{
		if (ft_buf3(str_v) == 1)
			break ;
		i = 0;
		if (buf2(str_v, ft_n_scob(str_v), ft_k_scob(str_v)) == 1)
			continue;
		i = ft_n_scob(str_v);
		while (i != ft_k_scob(str_v))
		{
			buf = ft_buf(str_v, ft_n_scob(str_v), ft_k_scob(str_v));
			if (ft_mul_div_mod(str_v, i) == 1)
				break ;
			if (ft_sum_min(str_v, i, buf) == 1)
				break ;
			i++;
		}
	}
	return (ft_atoi(str_v));
}
