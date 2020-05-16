/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsansa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/10 22:20:42 by gsansa            #+#    #+#             */
/*   Updated: 2020/03/11 19:51:27 by gsansa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

int			ft_list_size(t_list *begin_list)
{
	int		i;
	t_list	*a;

	i = 0;
	if (begin_list)
	{
		a = begin_list;
		while (a)
		{
			a = a->next;
			i++;
		}
		return (i);
	}
	return (i);
}
