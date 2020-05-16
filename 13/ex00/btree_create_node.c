/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsansa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/12 20:16:17 by gsansa            #+#    #+#             */
/*   Updated: 2020/03/13 21:08:05 by gsansa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_btree.h"

t_btree		*btree_create_node(void *item)
{
	t_btree *a;

	a = NULL;
	a = malloc(sizeof(t_btree));
	if (a)
	{
		a->item = item;
		a->left = NULL;
		a->right = NULL;
		return (a);
	}
	else
		return (NULL);
}
