/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealbert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 15:55:13 by ealbert           #+#    #+#             */
/*   Updated: 2015/11/25 19:37:32 by ealbert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*new;
	int		i;

	if ((new = (char *)malloc(sizeof(char) * size)) == NULL)
		return (NULL);
	while (i < size)
	{
		new[i] = '\0';
		i++;
	}
	return (new);
}
