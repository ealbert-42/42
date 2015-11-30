/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealbert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 17:55:58 by ealbert           #+#    #+#             */
/*   Updated: 2015/11/30 12:41:08 by ealbert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	int				i;
	unsigned char	*src2;
	unsigned char	*dst2;

	dst2 = (unsigned char *)dst;
	src2 = (unsigned char *)src;
	i = 0;
	while (*src2 != '\0' && i < n)
	{
		*dst2 = *src2;
		if (*src2 == (unsigned char)c)
		{
			dst = (void *)dst2;
			return (dst);
		}
		i++;
		dst2++;
		src2++;
	}
	*dst2 = '\0';
	dst = (void *)dst2;
	return (dst);
}
