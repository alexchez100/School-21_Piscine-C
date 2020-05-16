/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsansa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 19:34:48 by gsansa            #+#    #+#             */
/*   Updated: 2020/02/27 19:27:59 by gsansa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c)

void	gov(int i, int j, int k)
{
	ft_putchar(i + 48);
	ft_putchar(j + 48);
	ft_putchar(k + 48);
	if (i != 7 || j != 8 || k != 9)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	char i;
	char j;
	char k;

	i = 0;
	while (i != 10)
	{
		j = i + 1;
		while (j != 10)
		{
			k = j + 1;
			while (k != 10)
			{
				gov(i, j, k);
				k++;
			}
			j++;
		}
		i++;
	}
}
