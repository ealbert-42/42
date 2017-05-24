/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealbert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 17:55:58 by ealbert           #+#    #+#             */
/*   Updated: 2017/05/24 20:14:10 by ealbert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Fills dst with src memory address for n bytes. If c character is found,
** puts the occurence in dst and returns the part of dst that hasn't been
** touched. Else, returns NULL.
*/

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;
	unsigned char	x;

	x = (unsigned char)c;
	str1 = (unsigned char *)dst;
	str2 = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		str1[i] = str2[i];
		if (str1[i] == x)
			return ((void *)&str1[i + 1]);
		i++;
	}
	return (NULL);
}
