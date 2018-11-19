/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mybenzar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 09:50:49 by mybenzar          #+#    #+#             */
/*   Updated: 2018/11/19 11:10:18 by mybenzar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t size)
{
	size_t	len_dst;
	size_t	i;
	size_t	j;

	len_dst = ft_strlen((char*)dst);
	i = len_dst;
	j = 0;
	if (len_dst > size)
		return (ft_strlen((char*)src) + size);
	while (i < size - 1 && src[j])
		dst[i++] = src[j++];
	dst[i] = '\0';
	return (ft_strlen((char*)src) + len_dst);
}
