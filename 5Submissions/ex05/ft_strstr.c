/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chford <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/29 18:19:32 by chford            #+#    #+#             */
/*   Updated: 2018/10/30 18:52:57 by chford           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int x;

	if (to_find[0] == '\0')
		return (str);
	i = 0;
	while (str[i] != '\0')
	{
		x = 0;
		while (str[i] == to_find[x])
		{
			if (to_find[x + 1] == '\0')
				return (&str[i - x]);
			i++;
			x++;
		}
		i = i - x;
		i++;
	}
	return (0);
}