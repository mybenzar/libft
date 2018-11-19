/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mybenzar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/19 10:08:10 by mybenzar          #+#    #+#             */
/*   Updated: 2018/11/19 10:27:54 by mybenzar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_sqrt(int nb)
{
	int i;
	int sqrt;

	i = 1;
	sqrt = 1;
	if (nb == 1)
		return (1);
	if (nb <= 0)
		return (0);
	while (sqrt != nb)
	{
		i++;
		sqrt = i * i;
		if (sqrt > nb)
			return (0);
	}
	return (i);
}
