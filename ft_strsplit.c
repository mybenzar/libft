/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mybenzar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 18:16:27 by mybenzar          #+#    #+#             */
/*   Updated: 2018/11/19 11:45:32 by mybenzar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	countwords(char const *s, char c)
{
	size_t j;

	j = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s != c && *s)
			j++;
		while (*s != c && *s)
			s++;
	}
	return (j);
}

static size_t	countletters(char const *s, char c, int i)
{
	size_t j;

	j = 0;
	while (s[i] != c && s[i] != '\0')
	{
		i++;
		j++;
	}
	return (j);
}

char			**ft_strsplit(char const *s, char c)
{
	int		i;
	size_t	k;
	char	**tab;

	i = 0;
	k = -1;
	if (!s)
		return (NULL);
	if (!(tab = (char**)malloc(sizeof(char*) * (countwords(s, c) + 1))))
		return (NULL);
	while (++k < countwords(s, c))
	{
		while (s[i] == c)
			i++;
		if (!(tab[k] = ft_strsub(s, i, countletters(s, c, i))))
			return (NULL);
		i = i + countletters(s, c, i);
	}
	tab[k] = 0;
	return (tab);
}
