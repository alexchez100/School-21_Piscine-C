/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsansa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/09 23:05:57 by gsansa            #+#    #+#             */
/*   Updated: 2020/03/15 08:40:20 by gsansa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftlib.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}