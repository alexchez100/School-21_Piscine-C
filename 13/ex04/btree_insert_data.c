/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_insert_data.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsansa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/13 21:55:56 by gsansa            #+#    #+#             */
/*   Updated: 2020/03/13 23:20:06 by gsansa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_btree.h"

void		btree_insert_data(t_btree **root, void *item,
			int (*cmpf)(void*, void *))
{
	t_btree	*a;

	a = *root;
	if (a)
	{
		if (cmpf((a->item), item) >= 0)
		{
			if (a->right)
				btree_insert_data(&(a->right), item, cmpf);
			else
				(a->right) = btree_create_node(item);
		}
		if (cmpf((a->item), item) < 0)
		{
			if (a->left)
				btree_insert_data(&(a->left), item, cmpf);
			else
				(a->left) = btree_create_node(item);
		}
	}
	else
		a = btree_create_node(item);
}
