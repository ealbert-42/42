/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealbert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 13:01:08 by ealbert           #+#    #+#             */
/*   Updated: 2015/11/25 19:41:20 by ealbert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(const char *s, unsigned int start, size_t len)
{
	char	*new;
	int		bie;

	bie = 0;
	new = malloc(sizeof(char) * len);
	while (start != (len + start))
	{
		new[bie] = s[start];
		start++;
		bie++;
	}
	new[bie] = '\0';
	return (new);
}
