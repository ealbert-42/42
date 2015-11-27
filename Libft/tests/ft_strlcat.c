/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealbert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 11:26:42 by ealbert           #+#    #+#             */
/*   Updated: 2015/11/25 19:33:52 by ealbert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *s1, const char *s2, size_t size)
{
	int		i;
	int		j;
	int		total;

	i = 0;
	j = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0' && j < size)
		j++;
	total = i + j;
	j = 0;
	while (s2[j] != '\0' && j < size - 1)
	{
		s1[i] = s2[j];
		i++;
		j++;
	}
	s1[i] = s2[j];
	return (total);
}
