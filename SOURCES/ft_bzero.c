/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealbert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 14:20:50 by ealbert           #+#    #+#             */
/*   Updated: 2017/05/23 18:33:33 by ealbert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Puts every bytes to 0 from the start of the 's' memory address, until 'n'
** bytes were put to 0.
*/

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*tmp;
	int		i;

	i = -1;
	tmp = (char *)s;
	while (++i < n)
		tmp[i] = 0;
	s = (void *)tmp;
}
