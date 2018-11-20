/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mybenzar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 09:47:52 by mybenzar          #+#    #+#             */
/*   Updated: 2018/11/20 20:22:44 by mybenzar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*str;
	size_t	i;
	size_t	j;

	i = 0;
	if (!s)
		return (NULL);
	j = ft_strlen((char*)s) - 1;
	while (s[i] == 32 || s[i] == '\t' || s[i] == '\n')
		i++;
	while (s[j] == 32 || s[j] == '\t' || s[j] == '\n')
		j--;
	if (i == ft_strlen((char*)s))
	{
		if (!(str = ft_strdup(s + i)))
			return (NULL);
	}
	else
	{
		if (!(str = ft_strsub(s, i, (j - i + 1))))
			return (NULL);
	}
	return (str);
}
