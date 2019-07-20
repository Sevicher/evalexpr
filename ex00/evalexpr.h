/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   evalexpr.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oleland <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/20 19:13:26 by oleland           #+#    #+#             */
/*   Updated: 2019/07/20 23:08:41 by oleland          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

#ifndef EVALEXPR_H
#define EVALEXPR_H

int		ft_putchar(char c);
void	ft_putnbr(int nb);
int		ft_atoi(char *str);
int		eval_expr(char *str);
int		ft_to_int(char *str);

#endif
