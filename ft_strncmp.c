/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mybenzar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 17:51:54 by mybenzar          #+#    #+#             */
/*   Updated: 2018/11/13 19:38:59 by mybenzar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int i;

	i = 0;
	if (n == 0)
		return (0);
	while ((unsigned char)s1[i] != '\0'
			&& (unsigned char)s2[i] != '\0' && i < (int)n)
	{
		if ((unsigned char)s1[i] != (unsigned char)s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	if ((((unsigned char)s1[i] == '\0' && (unsigned char)s2[i] != '\0')
				|| ((unsigned char)s2[i] == '\0'
					&& (unsigned char)s1[i] != '\0')) && (i < (int)n))
		return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	return (0);
}
