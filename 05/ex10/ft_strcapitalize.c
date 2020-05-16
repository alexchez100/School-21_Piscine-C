/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsansa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/03 16:07:17 by gsansa            #+#    #+#             */
/*   Updated: 2020/03/03 20:27:13 by gsansa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int i;
	int j;

	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while ((str[i + j] > 47 && str[i + j] < 58)
				|| (str[i + j] > 64 && str[i + j] < 91)
				|| (str[i + j] > 96 && str[i + j] < 123))
		{
			if (str[i + j] > 64 && str[i + j] < 91)
				str[i + j] = str[i + j] + 32;
			j++;
		}
		if (j != 0)
			if (str[i] > 96 && str[i] < 123)
				str[i] = str[i] - 32;
		i = j + i + 1;
	}
	return (str);
}
