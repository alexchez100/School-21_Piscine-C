/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsansa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/06 12:05:11 by gsansa            #+#    #+#             */
/*   Updated: 2020/03/06 23:14:30 by gsansa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int		ft_big_size(char *str)
{
	int	k;
	int	size;
	int	big_size;

	k = 0;
	big_size = 0;
	while (str[k] != '\0')
	{
		if (!(str[k] == '\t' || str[k] == ' ' || str[k] == '\n'))
		{
			size = 1;
			while (!(str[k + size] == '\t' || str[k + size] == ' '
						|| str[k + size] == '\n' || str[k + size] == '\0'))
			{
				size++;
			}
			k = k + size - 1;
			big_size++;
		}
		k++;
	}
	return (big_size);
}

char		*ft_massiv(char *str, int k, int size)
{
	char	*a;
	int		j;

	a = (char*)malloc(sizeof(char) * (size + 1));
	j = 0;
	while ((j) < size)
	{
		a[j] = str[k + j];
		j++;
	}
	return (a);
}

char		**ft_split_whitespaces(char *str)
{
	int		i;
	int		k;
	int		size;
	char	**a;

	i = 0;
	k = 0;
	a = (char **)malloc(ft_big_size(str) * sizeof(char*));
	while (str[++k] != '\0')
	{
		if (!(str[k] == '\t' || str[k] == ' ' || str[k] == '\n'))
		{
			size = 1;
			while (!(str[size + k] == '\t' || str[size + k] == ' '
						|| str[size + k] == '\n' || str[size + k] == '\0'))
			{
				size++;
			}
			a[i] = ft_massiv(str, k, size);
			printf("%s", a[i]);
			printf("%c", '\n');
			i++;
			k = k + size - 1;
		}
	}
	return (a);
}
