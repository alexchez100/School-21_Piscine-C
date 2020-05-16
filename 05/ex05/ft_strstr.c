/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsansa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/03 11:32:46 by gsansa            #+#    #+#             */
/*   Updated: 2020/03/03 20:05:48 by gsansa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;
	int buf;

	i = 0;
	while (str[i] != '\0' || to_find[0] == '\0')
	{
		j = 0;
		buf = 0;
		while (to_find[j] != '\0')
		{
			if (str[i + j] != to_find[j])
				buf = 1;
			j++;
		}
		if (buf == 0 && to_find[j] == '\0')
		{
			return (&str[i]);
			break ;
		}
		i++;
	}
	if (buf != 0 && to_find[j] == '\0')
		return (0);
	return (0);
}
