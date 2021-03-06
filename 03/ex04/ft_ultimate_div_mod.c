/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsansa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/28 11:46:38 by gsansa            #+#    #+#             */
/*   Updated: 2020/02/28 22:08:28 by gsansa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int bufa;
	int bufb;

	bufa = *a;
	bufb = *b;
	if (*b != 0)
	{
		*a = bufa / bufb;
		*b = bufa % bufb;
	}
}
