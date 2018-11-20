/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mybenzar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 12:57:22 by mybenzar          #+#    #+#             */
/*   Updated: 2018/11/19 17:02:46 by mybenzar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	count_digits(unsigned int n)
{
	int i;

	i = 0;
	if (n == 0)
		return (1);
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

static char	*fill(char *ptr, int i, int k, unsigned int nb)
{
	ptr[i] = '\0';
	i--;
	while (i >= 0 + k)
	{
		ptr[i] = nb % 10 + '0';
		nb = nb / 10;
		i--;
	}
	if (k == 1)
		ptr[0] = '-';
	return (ptr);
}

char		*ft_itoa(int n)
{
	char			*ptr;
	int				i;
	unsigned int	nb;
	int				k;

	i = 0;
	k = 0;
	nb = n;
	if (n < 0)
	{
		nb = -n;
		k = 1;
	}
	i = count_digits(nb) + k;
	if (!(ptr = (char*)malloc(i + 1)))
		return (NULL);
	ptr = fill(ptr, i, k, nb);
	return (ptr);
}
