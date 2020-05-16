/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsansa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/10 16:17:27 by gsansa            #+#    #+#             */
/*   Updated: 2020/03/11 19:36:22 by gsansa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

t_list	*ft_create_elem(void *data)
{
	t_list	*a;

	a = NULL;
	a = malloc(sizeof(t_list));
	if (a)
	{
		a->data = data;
		a->next = NULL;
	}
	return (a);
}
