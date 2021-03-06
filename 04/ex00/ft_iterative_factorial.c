/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsansa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/29 10:06:59 by gsansa            #+#    #+#             */
/*   Updated: 2020/02/29 18:16:14 by gsansa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int b)
{
	int fac;
	int i;

	fac = 1;
	i = 1;
	if (b < 13 && b > (-1))
	{
		while (i != (b + 1))
		{
			fac = fac * i;
			i++;
		}
	}
	else
	{
		fac = 0;
	}
	return (fac);
}
