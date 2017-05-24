/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealbert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 16:18:26 by ealbert           #+#    #+#             */
/*   Updated: 2017/05/24 20:15:35 by ealbert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Search for the first occurence of the c byte on the s memory address
** on the n first bytes.  Returns a pointer beginning to the first occurence of
** the c byte.
*/

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*tmp;

	tmp = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (tmp[i] == (unsigned char)c)
			return ((void *)&tmp[i]);
		i++;
	}
	return (NULL);
}
