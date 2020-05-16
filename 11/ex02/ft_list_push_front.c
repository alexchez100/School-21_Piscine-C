/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsansa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/10 21:43:52 by gsansa            #+#    #+#             */
/*   Updated: 2020/03/11 19:48:48 by gsansa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

t_list		*ft_create_elem(void *data);

void		ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*a;

	a = ft_create_elem(data);
	if (*begin_list && begin_list)
	{
		a->next = *begin_list;
		*begin_list = a;
	}
	else
		*begin_list = ft_create_elem(data);
}
