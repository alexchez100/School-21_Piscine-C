/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsansa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 11:31:41 by gsansa            #+#    #+#             */
/*   Updated: 2020/02/27 23:03:38 by gsansa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c)

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
