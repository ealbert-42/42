/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealbert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 17:38:34 by ealbert           #+#    #+#             */
/*   Updated: 2017/05/23 18:44:58 by ealbert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Puts a node at the beginning of a given linked list.
*/

#include "libft.h"

void		ft_lstadd(t_list **alst, t_list *elem)
{
	t_list	*lsthead;

	lsthead = *alst;
	*alst = elem;
	elem->next = lsthead;
}
