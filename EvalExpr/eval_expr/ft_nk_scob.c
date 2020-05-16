/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nk_scob.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsansa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 05:44:29 by gsansa            #+#    #+#             */
/*   Updated: 2020/03/15 10:25:42 by gsansa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_n_scob(char *str)
{
	int i;
	int j;
	int n_scob;
	int k_scob;

	i = 0;
	j = 0;
	n_scob = 0;
	k_scob = 0;
	while (str[j] != '\0')
	{
		if (str[j] == 41)
		{
			k_scob = j;
			break ;
		}
		if (str[j] == 40)
			n_scob = j;
		j++;
	}
	return (n_scob);
}

int		ft_k_scob(char *str)
{
	int i;
	int j;
	int n_scob;
	int k_scob;

	i = 0;
	j = 0;
	n_scob = 0;
	k_scob = 0;
	while (str[j] != '\0')
	{
		if (str[j] == 41)
		{
			k_scob = j;
			break ;
		}
		if (str[j] == 40)
			n_scob = j;
		j++;
	}
	return (k_scob);
}
