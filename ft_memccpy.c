/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mybenzar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 19:49:32 by mybenzar          #+#    #+#             */
/*   Updated: 2018/11/12 20:57:17 by mybenzar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *restrict dst, const void *restrict src,
		int c, size_t n)
{
	int			i;
	char		*ptr1;
	const char	*ptr2;

	i = 0;
	ptr1 = dst;
	ptr2 = src;
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
