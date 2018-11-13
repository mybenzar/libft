/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mybenzar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 19:56:37 by mybenzar          #+#    #+#             */
/*   Updated: 2018/11/13 20:15:38 by mybenzar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char 	*str;
	int		i;

	i = (int)start;
	if (!(str = ft_memalloc(len + 1)))
		return (NULL);
	while (i < (int)len)
	{
		str[i] = s[i];
		i++;
	}
	str[len] = '\0';
	return (str);
}
