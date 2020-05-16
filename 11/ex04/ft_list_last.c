/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsansa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/11 11:46:36 by gsansa            #+#    #+#             */
/*   Updated: 2020/03/11 19:53:14 by gsansa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

t_list		*ft_list_last(t_list *begin_list)
{
	t_list	*a;

	a = NULL;
	if (begin_list)
	{
		a = begin_list;
		while (a->next)
			a = a->next;
		return (a);
	}
	return (NULL);
}
