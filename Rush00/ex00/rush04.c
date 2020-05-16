/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stannick <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/01 16:52:16 by stannick          #+#    #+#             */
/*   Updated: 2020/03/01 18:27:43 by stannick         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	start(int x)
{
	if (x >= 2)
	{
		ft_putchar('A');
		while ((x--) - 2 != 0)
			ft_putchar('B');
		ft_putchar('C');
	}
	else if (x == 1)
		ft_putchar('A');
}

void	end(int x)
{
	if (x >= 2)
	{
		ft_putchar('C');
		while ((x--) - 2 != 0)
			ft_putchar('B');
		ft_putchar('A');
	}
	else if (x == 1)
		ft_putchar('C');
}

void	line(int x)
{
	if (x > 2)
	{
		ft_putchar('B');
		while ((x--) - 2 != 0)
			ft_putchar(' ');
		ft_putchar('B');
	}
	else if (x == 1)
		ft_putchar('B');
}

void	rush04(int x, int y)
{
	if (x > 0 && y > 0)
	{
		start(x);
		while (y != 1)
		{
			ft_putchar('\n');
			if (y > 2)
				line(x);
			else
				end(x);
			y--;
		}
		ft_putchar('\n');
	}
}
