/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftlib.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsansa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 07:34:24 by gsansa            #+#    #+#             */
/*   Updated: 2020/03/15 14:26:18 by gsansa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FTLIB_H
# define FTLIB_H

# include <unistd.h>
# include <stdlib.h>

int		ft_atoi(char *str);
int		ft_len_chisla(int nb);
char	*ft_itoa(int nb);
char	*ft_new_str(char *str, int n_zam, int k_zam, int nb);
int		ft_strlen(char *str);
char	*ft_new_scob(char *str_v);
int		ft_buf3(char *str);
int		ft_n_scob(char *str);
int		ft_k_scob(char *str);
int		buf2(char *str, int n_scob, int k_scob);
int		ft_buf(char *str, int n_scob, int k_scob);
int		ft_mul_div_mod(char *str, int i);
int		ft_sum_min(char *str, int i, int buf);
void	ft_putnbr(int nb);
void	ft_putchar(char c);
int		eval_expr(char *str);

#endif
