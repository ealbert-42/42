/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealbert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 14:40:04 by ealbert           #+#    #+#             */
/*   Updated: 2017/05/24 20:16:57 by ealbert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Copies n bytes of src into dst memory addresses.
*/

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*dest;
	char	*srcs;

	if (n == 0 || dst == src)
		return (dst);
	dest = (char *)dst;
	srcs = (char *)src;
	while (--n)
		*dest++ = *srcs++;
	*dest = *srcs;
	return (dst);
}
