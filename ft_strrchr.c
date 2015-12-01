/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealbert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 11:46:49 by ealbert           #+#    #+#             */
/*   Updated: 2015/11/30 20:37:42 by ealbert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*found;

	i = 0;
	found = (char *)s;
	while (found[i] != '\0' && found[i] != c)
		i++;
	if (found[i] == c)
		return (&found[i]);
	if (c == found[0])
		return ((char *)s);
	return (NULL);
}
