/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsansa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/11 12:33:45 by gsansa            #+#    #+#             */
/*   Updated: 2020/03/11 19:57:42 by gsansa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_list.h"
#include <stdlib.h>

t_list		*ft_create_elem(void *data);

t_list		*ft_list_push_params(int ac, char **av)
{
	int		i;
	t_list	*a;
	t_list	*b;

	a = NULL;
	b = NULL;
	if (ac > 1)
	{
		b = ft_create_elem(av[ac - 1]);
		a = b;
		i = 1;
		while (i != (ac - 1))
		{
			a->next = ft_create_elem(av[ac - 1 - i]);
			a = a->next;
			i++;
		}
		return (b);
	}
	else
		return (NULL);
}
