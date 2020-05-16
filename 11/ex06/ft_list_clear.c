/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsansa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/11 13:42:14 by gsansa            #+#    #+#             */
/*   Updated: 2020/03/11 19:59:45 by gsansa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void		ft_list_clear(t_list **begin_list)
{
	t_list	*a;

	a = NULL;
	while (*begin_list)
	{
		a = *begin_list;
		*begin_list = (*begin_list)->next;
		free(a);
	}
	*begin_list = NULL;
}
