i/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsansa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 17:16:43 by gsansa            #+#    #+#             */
/*   Updated: 2020/02/27 19:31:35 by gsansa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c)

void	ft_print_alphabet(void)
{
	char i;

	i = 'a';
	while (i != ('z' + 1))
	{
		ft_putchar(i);
		i++;
	}
}
