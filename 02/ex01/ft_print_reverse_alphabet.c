/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsansa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 17:41:35 by gsansa            #+#    #+#             */
/*   Updated: 2020/02/27 19:25:09 by gsansa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c)

void	ft_print_reverse_alphabet(void)
{
	char i;

	i = 'z';
	while (i != ('a' - 1))
	{
		ft_putchar(i);
		i--;
	}
	ft_putchar('\n');
}
