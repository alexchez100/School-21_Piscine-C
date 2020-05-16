/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsansa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 16:43:49 by gsansa            #+#    #+#             */
/*   Updated: 2020/03/05 21:33:42 by gsansa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int size;
	int min_min;
	int i;

	if (min < max)
	{
		min_min = min;
		size = max - min;
		i = 0;
		*range = (int*)malloc(sizeof(**range) * (size));
		if (*range == 0)
			return (0);
		while (i < size)
		{
			(*range)[i] = min;
			min++;
			i++;
		}
		return (max - min_min);
	}
	*range = NULL;
	return (0);
}
