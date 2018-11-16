/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mybenzar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 19:56:37 by mybenzar          #+#    #+#             */
/*   Updated: 2018/11/16 12:26:50 by mybenzar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char 	*str;
	int		i;

	i = 0;
	if (!s)
		return (NULL);
	if (!(str = (char*)ft_memalloc(len + 1)))
		return (NULL);
	while (i < (int)len)
	{
		str[i] = s[i + start];
		i++;
	}
	str[len] = '\0';
	return (str);
}
