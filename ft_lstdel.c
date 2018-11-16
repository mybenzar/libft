/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mybenzar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 17:34:31 by mybenzar          #+#    #+#             */
/*   Updated: 2018/11/16 18:17:04 by mybenzar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*tmp;

	if (!alst)
		return ;
	tmp = *alst;
	if (tmp -> next == NULL)
	{
		ft_lstdelone(alst, del);
		return ;
	}
	while (*alst)
	{
		tmp = *alst;
		*alst = (*alst) -> next;
		del(tmp -> content, tmp -> content_size);
		free(tmp);
	}
	free(*alst);
	*alst = NULL;
}
