/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsansa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 11:18:47 by gsansa            #+#    #+#             */
/*   Updated: 2020/03/05 21:24:39 by gsansa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int size;
	int *a;
	int i;

	if (min >= max)
		return (NULL);
	size = max - min;
	i = 0;
	a = (int*)malloc(sizeof(int) * (size));
	if (a == NULL)
		return (NULL);
	while (i < size)
	{
		a[i] = min;
		min++;
		i++;
	}
	return (a);
}
