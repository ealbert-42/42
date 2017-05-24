/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealbert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 14:38:27 by ealbert           #+#    #+#             */
/*   Updated: 2017/05/24 20:17:39 by ealbert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Free the memory address contained in the ap pointer and sets it to NULL.
*/

#include "libft.h"

void	ft_memdel(void **ap)
{
	free(*ap);
	*ap = NULL;
}
