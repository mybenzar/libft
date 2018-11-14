/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mybenzar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 14:29:10 by mybenzar          #+#    #+#             */
/*   Updated: 2018/11/14 18:55:23 by mybenzar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned long	i;
	unsigned char	*dst2;
	unsigned char	*src2;

	dst2 = (unsigned char*)dst;
	src2 = (unsigned char*)src;
	if (dst2 < src2)
		ft_memcpy(dst2, src2, len);
	else
	{
		i = len - 1;
		while ((int)i >= 0)
		{
			dst2[i] = src2[i];
			i--;
		}
	}
	return (dst);
}
