/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsansa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/09 15:25:19 by gsansa            #+#    #+#             */
/*   Updated: 2020/03/10 10:56:11 by gsansa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int i;
	int *buf;

	buf = (int*)malloc(sizeof(*tab) * length);
	i = 0;
	while (i < length)
	{
		buf[i] = (*f)(tab[i]);
		i++;
	}
	return (buf);
}
