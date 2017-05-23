/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealbert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 17:25:56 by ealbert           #+#    #+#             */
/*   Updated: 2017/05/23 18:47:35 by ealbert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Free the given link.
** del is a function that must be created by the user in order to free the link.
*/

#include "libft.h"

void		ft_lstdelone(t_list **alst, void (*del)(void *, size_t))
{
	del((*alst)->content, (*alst)->content_size);
	ft_memdel((void **)alst);
}
