/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealbert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 11:49:34 by ealbert           #+#    #+#             */
/*   Updated: 2015/11/26 15:28:35 by ealbert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	j = 0;
	str = (char *)s1;
	if (!s2)
		return (str);
	while (s1[i] != '\0' && s2[j] != '\0' && j < n)
	{
		if (s1[i] == s2[j])
			j++;
		i++;
	}
	if (s1[i] == '\0' || (j != n || s2[j] != '\0'))
		return (0);
	str = (char *)&s1[i];
	return (&str[i]);
}
