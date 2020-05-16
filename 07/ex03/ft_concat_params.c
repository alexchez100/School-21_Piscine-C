/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsansa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 14:21:27 by gsansa            #+#    #+#             */
/*   Updated: 2020/03/05 21:45:06 by gsansa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int		ft_simvolov(int argc, char **argv)
{
	int i;
	int j;
	int simvolov;

	simvolov = 0;
	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			simvolov++;
			j++;
		}
		i++;
	}
	return (simvolov);
}

char	*ft_concat_params(int argc, char **argv)
{
	int		i;
	int		j;
	int		k;
	char	*a;

	a = (char*)malloc(sizeof(**argv) * (ft_simvolov(argc, argv) + argc - 1));
	if (a == (NULL))
		return (NULL);
	k = 0;
	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			a[k++] = argv[i][j];
			j++;
		}
		if (i != argc - 1)
			a[k] = '\n';
		k++;
		i++;
	}
	a[k] = '\0';
	return (a);
}
