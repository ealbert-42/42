/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealbert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 14:40:04 by ealbert           #+#    #+#             */
/*   Updated: 2015/11/25 17:46:15 by ealbert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	int		i;
	int		j;
	char	*dest;
	char	*srcs;

	dest = (char *)dst;
	srcs = (char *)src;
	j = 0;
	i = 0;
	while (n != 0)
	{
		if (!dest)
		{
			dest[i] = srcs[j];
			j++;
			n--;
		}
		i++;
	}
	dst = (void *)dest;
	return (dst);
}
