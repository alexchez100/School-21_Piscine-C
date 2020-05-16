/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsansa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/09 18:33:38 by gsansa            #+#    #+#             */
/*   Updated: 2020/03/10 17:05:34 by gsansa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int i;
	int buf;
	int buf2;

	i = 0;
	buf = 0;
	buf2 = 0;
	if (length == 1)
		return (1);
	while (i < (length - 1))
	{
		if ((*f)(tab[i], tab[i + 1]) > 0)
			buf = 1;
		if ((*f)(tab[i], tab[i + 1]) < 0)
			buf2 = 1;
		i++;
	}
	if (buf == 0 && buf2 == 0)
		return (1);
	if ((buf == 1 && buf2 != 1) || (buf != 1 && buf2 == 1))
		return (1);
	return (0);
}
