/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   znak.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsansa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/09 23:00:08 by gsansa            #+#    #+#             */
/*   Updated: 2020/03/10 12:10:22 by gsansa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb);

void	sum(int a, int b)
{
	ft_putnbr(a + b);
}

void	min(int a, int b)
{
	ft_putnbr(a - b);
}

void	mul(int a, int b)
{
	ft_putnbr(a * b);
}

void	div(int a, int b)
{
	if (b == 0)
	{
		write(1, "Stop : division by zero", 24);
		write(1, "\n", 1);
	}
	else
		ft_putnbr(a / b);
}

void	mod(int a, int b)
{
	if (b == 0)
	{
		write(1, "Stop : modulo by zero", 22);
		write(1, "\n", 1);
	}
	else
		ft_putnbr(a % b);
}
