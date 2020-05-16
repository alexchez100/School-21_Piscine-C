/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjoya <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/01 13:31:23 by pjoya             #+#    #+#             */
/*   Updated: 2020/03/01 18:25:06 by stannick         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_putchar(char c);

void		rstart(int x)
{
	if (x >= 2)
	{
		ft_putchar('/');
		while ((x--) - 2 != 0)
			ft_putchar('*');
		ft_putchar('\\');
	}
	else if (x == 1)
		ft_putchar('/');
}

void		rend(int x)
{
	if (x >= 2)
	{
		ft_putchar('\\');
		while ((x--) - 2 != 0)
			ft_putchar('*');
		ft_putchar('/');
	}
	else if (x == 1)
		ft_putchar('\\');
}

void		rline(int x)
{
	if (x > 2)
	{
		ft_putchar('*');
		while ((x--) - 2 != 0)
			ft_putchar(' ');
		ft_putchar('*');
	}
	else if (x == 1)
		ft_putchar('*');
}

void		rush01(int x, int y)
{
	if (x > 0 && y > 0)
	{
		rstart(x);
		while (y != 1)
		{
			ft_putchar('\n');
			if (y > 2)
				rline(x);
			else
				rend(x);
			y--;
		}
		ft_putchar('\n');
	}
}
