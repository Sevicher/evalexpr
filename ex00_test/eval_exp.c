/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_exp.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etristan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/20 19:15:32 by etristan          #+#    #+#             */
/*   Updated: 2019/07/20 22:51:25 by etristan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "head_eval.h"

int	eval_expr(char *str)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if (str[j] == ')')
		{
			str[j] = ' ';
			i = 0;
			while (i < j)
			{
				if (str[i] == '(')
					str[i] = ' ';
				ft_putchar(str[i]);
				str[i] =' ';
				i++;
			}
		}
		i++;
		j++;

	}
	ft_putchar('\n');
	return (9);
}
