/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mybenzar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 19:45:08 by mybenzar          #+#    #+#             */
/*   Updated: 2018/11/09 20:38:18 by mybenzar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int i;
	int neg;
	int nb;

	i = 0;
	nb = 0;
	neg = 1;
	while ((str[i] + 48 >= 9 && str[i] + 48 <= 13) || str[i] == ' ')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			neg = - 1;
		i++;
	}
	if (ft_isdigit(str[i]))
	{
		nb = nb * 10 + str[i] - 48;
		i++;
	}
	return (neg * nb);
}
