/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealbert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 11:26:42 by ealbert           #+#    #+#             */
/*   Updated: 2015/11/26 17:50:23 by ealbert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_strlcat(char *dst, const char *src, size_t size)
{
	int		i;
	int		j;
	int		total;

	i = 0;
	j = 0;
	while (dst[i] != '\0')
		i++;
	while (dst[j] != '\0' && j < size)
		j++;
	total = i + j;
	j = 0;
	while (src[j] != '\0' && j < size - 1)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = src[j];
	return (total);
}
