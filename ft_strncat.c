/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mybenzar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 15:26:38 by mybenzar          #+#    #+#             */
/*   Updated: 2018/11/09 16:20:51 by mybenzar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *restrict s1, const char *restrict s2, size_t n)
{
	int i;
	int j;

	i = 0;
	j = ft_strlen(s1);
	while (s2[i] != '\0' && i < (int)n)
		s1[j++] = s2[i++];
	s1[j] = '\0';
	return (s1);
}
