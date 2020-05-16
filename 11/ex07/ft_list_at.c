/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsansa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/11 14:22:01 by gsansa            #+#    #+#             */
/*   Updated: 2020/03/11 20:04:50 by gsansa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

t_list				*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	t_list			*a;
	unsigned int	i;

	a = NULL;
	i = 1;
	if (begin_list)
	{
		a = begin_list;
		while (i != nbr)
		{
			if (a == NULL)
				return ((void*)0);
			a = a->next;
			i++;
		}
		return (a);
	}
	return ((void*)0);
}
