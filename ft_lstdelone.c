/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mybenzar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 16:27:28 by mybenzar          #+#    #+#             */
/*   Updated: 2018/11/16 18:17:45 by mybenzar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list **alst, void (*del)(void*, size_t))
{
	t_list	*tmp;
	
	if (!alst)
		return ;
	tmp = *alst;
	del(tmp -> content, tmp -> content_size);
	ft_memdel(tmp -> content);
	*alst = (*alst) -> next;
}
