/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealbert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 11:49:34 by ealbert           #+#    #+#             */
/*   Updated: 2015/12/01 19:16:10 by ealbert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

char    *ft_strnstr(const char *s1, const char *s2, size_t n)

{

	size_t    i;
	size_t f;
	size_t l;

	i = 0;
	l = ft_strlen(s2);
	while (s1[i] && (l + i - 1) < n)
	{
		if (s1[i] == *s2)
		{
			f = 0;
			while (s1[f + i] == s2[f] && (i + f) < n)
			{
				if (s2[f + 1] == '\0'  || (i + f) == n - 1)
					return ((char *)s1 + i);
				f++;
			}
		}
		i++;
	}
	return (NULL);
}
