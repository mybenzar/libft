/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mybenzar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 18:16:27 by mybenzar          #+#    #+#             */
/*   Updated: 2018/11/14 19:39:46 by mybenzar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	int		i;
	int		j;
	char	**tab;

	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			if (!(tab = ft_memalloc(i - j + 1)))
				return (NULL);
			tab[i] = ft_strsub(s, i, (size_t)(i - j + 1));
			j = 0;
		}
		i++;
		j++;
	}
	tab[i] = 0;
	return (tab);
}
