/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealbert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 11:46:49 by ealbert           #+#    #+#             */
/*   Updated: 2015/11/30 12:43:26 by ealbert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	int		j;
	char	*found;

	i = 0;
	found = (char *)s;
	while (found[i] != '\0')
	{
		if (found[i] == c)
			j = i;
		i++;
	}
	return (&found[j]);
}
