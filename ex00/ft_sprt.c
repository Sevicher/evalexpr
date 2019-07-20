/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sprt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oleland <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/20 19:57:03 by oleland           #+#    #+#             */
/*   Updated: 2019/07/20 23:08:44 by oleland          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "evalexpr.h"

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void	ft_putnbr(int nb)
{
	int		nbr;

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
	if (nbr >= 10)
		ft_putnbr(nbr / 10);
	ft_putchar((nbr % 10) + '0');
	if (nb == -2147483648)
		ft_putchar('8');
}

int             ft_atoi(char *str)
{
	int i;
	int sign;
	int res;

	i = 0;
	sign = 1;
	res = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		++i;
	if (str[i] == '-')
	{
		sign = -1;
		++i;
	}
	if (str[i] == '+')
		++i;
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + str[i] - '0';
		++i;
	}
	return ((int)res * sign);
}

int		ft_to_int(char *str)
{
	int i;

	i = 0;
	while(str[i])
	{
		i = i * 10 + (*str - '0');
		i++;
	}
	return (str[i]);
}
