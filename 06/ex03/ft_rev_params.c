/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsansa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 17:02:24 by gsansa            #+#    #+#             */
/*   Updated: 2020/03/04 20:30:58 by gsansa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int i;
	int j;

	i = 1;
	j = 0;
	if (argc > 1)
	{
		while (argv[i] != '\0')
		{
			i++;
		}
		while (i > 1)
		{
			j = 0;
			while (argv[i - 1][j] != '\0')
			{
				ft_putchar(argv[i - 1][j]);
				j++;
			}
			i--;
			ft_putchar('\n');
		}
	}
	return (0);
}
