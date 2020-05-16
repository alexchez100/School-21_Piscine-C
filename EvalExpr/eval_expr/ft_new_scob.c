/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_new_scob.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsansa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 04:18:11 by gsansa            #+#    #+#             */
/*   Updated: 2020/03/15 08:17:27 by gsansa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftlib.h"

char		*ft_new_scob(char *str_v)
{
	char	*str;
	int		popo;

	popo = 0;
	str = (char*)malloc(sizeof(char) * (ft_strlen(str_v) + 2));
	str[0] = 40;
	while (popo != ft_strlen(str_v))
	{
		str[popo + 1] = str_v[popo];
		popo++;
	}
	str[popo + 1] = 41;
	str[popo + 2] = '\0';
	return (str);
}
