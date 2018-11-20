/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mybenzar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 19:49:32 by mybenzar          #+#    #+#             */
/*   Updated: 2018/11/20 12:23:25 by mybenzar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	int				i;
	unsigned char	*ptr1;
	unsigned char	*ptr2;

	i = 0;
	if (!dst && !src)
		return (NULL);
	ptr1 = (unsigned char*)dst;
	ptr2 = (unsigned char*)src;
	while (i < (int)n)
	{
		ptr1[i] = ptr2[i];
		if (ptr2[i] == (unsigned char)c)
		{
			return (dst + i + 1);
		}
		i++;
	}
	return (NULL);
}
