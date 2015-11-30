/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealbert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 12:04:28 by ealbert           #+#    #+#             */
/*   Updated: 2015/11/30 12:44:34 by ealbert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *s)
{
	int		i;
	char	*new;

	i = 0;
	if (s)
		new = malloc(sizeof(char) * (ft_strlen(s)  + 1));
	if (!new)
		return (NULL);
	while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
		i++;
	while (s[i] != '\0')
	{
		new[i] = s[i];
		i++;
	}
	new[i] = '\0';
	i--;
	while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
	{
		new[i] = '\0';
		i--;
	}
	return (new);
}
