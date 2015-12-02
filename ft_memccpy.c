/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealbert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 17:55:58 by ealbert           #+#    #+#             */
/*   Updated: 2015/12/02 18:45:01 by ealbert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	if (!n)
		return (NULL);
	while (i < n)
	{
		str1[i] = str2[i];
		if (str1[i] == x)
			return (dst);
		i++;
	}
	return (NULL);
}
