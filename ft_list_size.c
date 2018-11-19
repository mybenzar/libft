/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mybenzar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/19 10:43:37 by mybenzar          #+#    #+#             */
/*   Updated: 2018/11/19 11:06:33 by mybenzar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_list_size(t_list *content)
{
	int		i;
	t_list	*tmp;

	i = 0;
	if (!content)
		return (0);
	tmp = content;
	while (tmp)
	{
		i++;
		tmp = tmp->next;
	}
	return (i);
}
