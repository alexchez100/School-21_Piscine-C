/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_new_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsansa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 03:59:07 by gsansa            #+#    #+#             */
/*   Updated: 2020/03/15 10:24:48 by gsansa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftlib.h"

char	*ft_new_str(char *str, int n_zam, int k_zam, int nb)
{
	int i;

	i = n_zam;
	while ((str[i]) != '\0')
	{
		if (i >= (n_zam + ft_len_chisla(nb)))
			str[i] = str[k_zam - n_zam - ft_len_chisla(nb) + i + 1];
		i++;
	}
	i = n_zam;
	while ((str[i]) != '\0')
	{
		if (i >= n_zam && i <= k_zam)
		{
			if (i - n_zam < ft_len_chisla(nb))
				str[i] = ft_itoa(nb)[i - n_zam];
		}
		i++;
	}
	return (str);
}
