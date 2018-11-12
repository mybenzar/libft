/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mybenzar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 19:25:30 by mybenzar          #+#    #+#             */
/*   Updated: 2018/11/12 20:56:55 by mybenzar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	int			i;
	char		*ptr;
	const char	*ptr2;

	i = 0;
	ptr = dst;
	ptr2 = src;
	while (i < (int)n)
	{
		ptr[i] = ptr2[i];
		i++;
	}
	return (dst);
}