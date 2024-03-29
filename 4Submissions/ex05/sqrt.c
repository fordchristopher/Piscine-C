/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sqrt.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chford <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/27 17:16:31 by chford            #+#    #+#             */
/*   Updated: 2018/10/27 18:26:42 by chford           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int a;

	a = 1;
	while (a < nb)
	{
		if (a * a == nb)
			return (a);
		else
			a++;
	}
	return (0);
}
