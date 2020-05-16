/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsansa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 18:14:53 by gsansa            #+#    #+#             */
/*   Updated: 2020/02/27 19:28:44 by gsansa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c)

void	dp_ci(int i, int j, int k)
{
	int l;

	l = 0;
	while (l != 10)
	{
		if ((i * 10 + j) < (k * 10 + l))
		{
			ft_putchar(i + 48);
			ft_putchar(j + 48);
			ft_putchar(' ');
			ft_putchar(k + 48);
			ft_putchar(l + 48);
			if (i != 9 || j != 8 || k != 9 || l != 9)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
		}
		l++;
	}
}

void	ft_print_comb2(void)
{
	int i;
	int j;
	int k;

	i = 0;
	while (i != 10)
	{
		j = 0;
		while (j != 10)
		{
			k = 0;
			while (k != 10)
			{
				dp_ci(i, j, k);
				k++;
			}
			j++;
		}
		i++;
	}
}
