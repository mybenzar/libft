/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mybenzar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 14:13:08 by mybenzar          #+#    #+#             */
/*   Updated: 2018/11/19 16:45:44 by mybenzar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*ptr;

	i = 0;
	if (*needle == 0)
	{
		ptr = (char*)haystack;
		return (ptr);
	}
	while (haystack[i] != 0 && i <= len)
	{
		j = 0;
		while (haystack[i + j] == needle[j] && (i + j) < len)
		{
			j++;
			if (needle[j] == 0)
			{
				ptr = (char*)(haystack + i);
				return (ptr);
			}
		}
		i++;
	}
	return (0);
}
