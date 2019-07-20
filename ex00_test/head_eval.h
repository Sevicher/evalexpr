/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   head_eval.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etristan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/20 19:16:43 by etristan          #+#    #+#             */
/*   Updated: 2019/07/20 19:49:01 by etristan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEAD_EVAL_H
# define HEAD_EVAL_H

# include <unistd.h>
# include <stdlib.h>

void	ft_putchar(char c);
void	ft_putnbr(int nb);
void	ft_putstr(char *str);
int		ft_strlen(char *str);
int		eval_expr(char *str);

#endif
