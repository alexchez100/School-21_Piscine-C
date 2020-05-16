/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsansa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 17:45:22 by gsansa            #+#    #+#             */
/*   Updated: 2020/03/04 21:03:48 by gsansa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		ft_strcmp(char *s1, char *s2)
{
	int i;
	int buf;

	i = 0;
	buf = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			buf = (s1[i] - s2[i]);
			break ;
		}
		if (s1[i] == s2[i] && (s1[i + 1] == '\0' && s2[i + 1] == '\0'))
			return (0);
		i++;
	}
	return (buf);
}

void	ft_sort(int slov, char **argv)
{
	char	*buf;
	int		i;
	int		n;

	i = 1;
	n = 1;
	while (i != slov)
	{
		n = 1;
		while (n != slov - i)
		{
			if (ft_strcmp(argv[n], argv[n + 1]) > 0)
			{
				buf = "null";
				buf = argv[n];
				argv[n] = argv[n + 1];
				argv[n + 1] = buf;
			}
			n++;
		}
		i++;
	}
}

int		main(int argc, char **argv)
{
	int i;
	int j;

	if (argc > 1)
	{
		i = 1;
		while (argv[i] != '\0')
		{
			i++;
		}
		ft_sort(i, argv);
		i = 1;
		while (argv[i] != '\0')
		{
			j = 0;
			while (argv[i][j] != '\0')
			{
				ft_putchar(argv[i][j]);
				j++;
			}
			i++;
			ft_putchar('\n');
		}
	}
	return (0);
}
