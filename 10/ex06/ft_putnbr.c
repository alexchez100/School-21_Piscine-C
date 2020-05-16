/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsansa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/02 12:56:20 by gsansa            #+#    #+#             */
/*   Updated: 2020/03/10 12:11:02 by gsansa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	dop(int nb)
{
	int a;
	int i;
	int j;
	int b;

	i = 0;
	a = nb;
	b = 1;
	while ((a / 10) != 0)
	{
		a = a / 10;
		b = b * 10;
		i++;
	}
	j = i;
	while (j >= 0)
	{
		ft_putchar((nb / b) + 48);
		nb = nb % b;
		b = b / 10;
		j--;
	}
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else
	{
		if (nb < 0)
		{
			ft_putchar('-');
			nb = nb * (-1);
		}
		if (nb != 0)
		{
			dop(nb);
		}
		else
		{
			ft_putchar(0 + 48);
		}
	}
	write(1, "\n", 1);
}
