/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chford <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/29 09:28:55 by chford            #+#    #+#             */
/*   Updated: 2018/10/30 10:06:44 by chford           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
void	ft_putchar(char c);

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		ft_putnbr(147483648);
	}
	else
	{
		if (nb < 0)
		{
			nb = 0 - nb;
			ft_putchar('-');
		}
		if (nb < 10 && nb >= 0)
		{
			ft_putchar(nb + '0');
		}
		else
		{
			ft_putnbr(nb / 10);
			ft_putchar((nb % 10) + '0');
		}
	}
}
