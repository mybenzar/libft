/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mybenzar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/19 10:47:44 by mybenzar          #+#    #+#             */
/*   Updated: 2018/11/19 10:57:29 by mybenzar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_list_reverse(t_list **alst)
{
	t_list	*before;
	t_list	*tmp;
	t_list	*after;

	if (!alst)
		return ;
	before = NULL;
	tmp = *alst;
	while (tmp)
	{
		after = tmp->next;
		tmp->next = before;
		before = tmp;
		tmp = after;
	}
	*alst = before;
}
