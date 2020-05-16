/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsansa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 10:54:30 by gsansa            #+#    #+#             */
/*   Updated: 2020/03/05 21:19:38 by gsansa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (1)
	{
		if (str[i] == ('\0'))
		{
			break ;
		}
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	char			*result;
	unsigned int	i;

	result = (char*)malloc(sizeof(*src) * (ft_strlen(src) + 1));
	if (result == (NULL))
		return (NULL);
	i = 0;
	while (src[i] != '\0')
	{
		result[i] = src[i];
		i++;
	}
	return (result);
}
