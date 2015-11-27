/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealbert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 13:06:56 by ealbert           #+#    #+#             */
/*   Updated: 2015/11/25 19:33:18 by ealbert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*join;
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	k = -1;
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	join = (char *)malloc(sizeof(char) * ((i + j) - 1));
	i = -1;
	j = -1;
	while (s1[++i] != '\0')
	{
		join[++k] = s1[i];
	}
	while (s2[++j] != '\0')
	{
		join[++k] = s1[i];
	}
	join[++k] = '\0';
	return (join);
}
