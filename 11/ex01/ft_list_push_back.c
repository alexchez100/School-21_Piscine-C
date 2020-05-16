/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsansa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/10 16:31:26 by gsansa            #+#    #+#             */
/*   Updated: 2020/03/11 19:46:10 by gsansa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

t_list		*ft_create_elem(void *data);

void		ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*a;

	if (*begin_list && begin_list)
	{
		a = *begin_list;
		while (a->next)
			a = a->next;
		a->next = ft_create_elem(data);
	}
	else
		*begin_list = ft_create_elem(data);
}
