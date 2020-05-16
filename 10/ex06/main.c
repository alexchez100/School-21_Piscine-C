/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsansa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/09 20:26:32 by gsansa            #+#    #+#             */
/*   Updated: 2020/03/10 12:06:47 by gsansa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include "bibi.h"

int			main(int argc, char **argv)
{
	int		a;
	int		b;
	void	(*znak)(int a, int b);

	if (argc != 4)
		return (0);
	if (ft_strlen(argv[2]) != 1)
		return (0);
	if (!(argv[2][0] == '+' || argv[2][0] == '-' || argv[2][0] == '/'
				|| argv[2][0] == '*' || argv[2][0] == '%'))
		return (0);
	a = ft_atoi(argv[1]);
	b = ft_atoi(argv[3]);
	if (argv[2][0] == '+')
		znak = sum;
	if (argv[2][0] == '/')
		znak = div;
	if (argv[2][0] == '%')
		znak = mod;
	if (argv[2][0] == '*')
		znak = mul;
	if (argv[2][0] == '-')
		znak = min;
	znak(a, b);
	return (0);
}
