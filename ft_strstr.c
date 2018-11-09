/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mybenzar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 12:47:46 by mybenzar          #+#    #+#             */
/*   Updated: 2018/11/09 18:04:56 by mybenzar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int		i;
	int		j;
	char	*ptr;

	i = 0;
	if (*needle == 0)
	{
		ptr = (char*)haystack;
		return (ptr);
	}
	while (haystack[i] != 0)
	{
		j = 0;
		while (haystack[i + j] == needle[j])
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
