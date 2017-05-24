/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealbert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 16:08:32 by ealbert           #+#    #+#             */
/*   Updated: 2017/05/24 20:30:40 by ealbert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Copies the 'n' first bytes of 'src'
** at the beginning of 'dest' memory address.
*/

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *)dest;
	str2 = (unsigned char *)src;
	i = 0;
	if (str1 > str2)
	{
		while (i < n)
		{
			str1[n - 1] = str2[n - 1];
			n--;
		}
	}
	else
	{
		while (i < n)
		{
			str1[i] = str2[i];
			i++;
		}
	}
	return (dest);
}
