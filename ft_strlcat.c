/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealbert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 11:26:42 by ealbert           #+#    #+#             */
/*   Updated: 2015/12/02 16:03:34 by ealbert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_strlcat(char *dst, const char *src, size_t size)
{
	int		total;
	int		j;
	int		i;

	total = (ft_strlen(dst) + size - 1);
	i = ft_strlen(dst);
	j = 0;
	while (j < size - 1)
	{
		dst[i] = src[j];
		j++;
		i++;
	}
	dst[i] = '\0';
	return (total);
}
