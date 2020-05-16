/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsansa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/29 14:39:23 by gsansa            #+#    #+#             */
/*   Updated: 2020/02/29 18:59:22 by gsansa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int buf;
	int i;

	i = 0;
	buf = 1;
	if (power < 0)
		return (0);
	else
	{
		while (i != power)
		{
			buf = buf * nb;
			i++;
		}
		return (buf);
	}
}
