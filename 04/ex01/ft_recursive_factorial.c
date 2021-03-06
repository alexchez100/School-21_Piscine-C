/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsansa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/29 11:25:04 by gsansa            #+#    #+#             */
/*   Updated: 2020/02/29 18:18:11 by gsansa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int b)
{
	if (b > 13 || b < 0)
	{
		return (0);
	}
	if (b == 0)
	{
		return (1);
	}
	return (ft_recursive_factorial(b - 1) * b);
}
