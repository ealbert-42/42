/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealbert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 17:35:27 by ealbert           #+#    #+#             */
/*   Updated: 2017/05/23 18:49:35 by ealbert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Applies the f function to every node of the list.
**
*/

#include "libft.h"

void		ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
	t_list	*next;

	while (lst)
	{
		next = lst->next;
		f(lst);
		lst = next;
	}
}
