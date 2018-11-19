/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mybenzar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 09:30:29 by mybenzar          #+#    #+#             */
/*   Updated: 2018/11/19 11:09:49 by mybenzar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char *str;

	if (!s1 || !s2)
		return (NULL);
	if (!(str = (char*)ft_memalloc(ft_strlen(((char*)s1) +
						ft_strlen((char*)s2) + 1))))
		return (NULL);
	str = ft_strsub((char const*)s1, 0, ft_strlen((char*)s1));
	str = ft_strcat(str, (char*)s2);
	return (str);
}
