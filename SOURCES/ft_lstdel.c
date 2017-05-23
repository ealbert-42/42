/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealbert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 17:29:41 by ealbert           #+#    #+#             */
/*   Updated: 2017/05/23 18:46:17 by ealbert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Calls the del function on every nodes of the given list.
** The del function is a function created by the user in order to free every
** nodes of the linked list.
*/

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*next;
	t_list	*list;

	list = *alst;
	while (list)
	{
		next = list->next;
		ft_lstdelone(&list, del);
		list = next;
	}
	*alst = NULL;
}
