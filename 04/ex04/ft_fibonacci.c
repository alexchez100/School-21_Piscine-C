/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsansa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/29 15:57:42 by gsansa            #+#    #+#             */
/*   Updated: 2020/02/29 18:24:02 by gsansa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_fibonacci(int index)
{
	if (index >= 0)
	{
		if (index == 0)
			return (0);
		if (index == 1)
			return (1);
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
	}
	else
		return (-1);
}
