/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etristan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/08 14:00:16 by etristan          #+#    #+#             */
/*   Updated: 2019/07/20 19:46:38 by etristan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "head_eval.h"

void	ft_putnbr(int nb)
{
	int		nbr;
	char	num;

	nbr = nb;
	if (nb == -2147483648)
	{
		nbr = -214748364;
	}
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr = -nbr;
	}
	if (nbr / 10)
	{
		ft_putnbr(nbr / 10);
	}
	num = nbr % 10 + '0';
	ft_putchar(num);
	if (nb == -2147483648)
	{
		ft_putchar('8');
	}
}
