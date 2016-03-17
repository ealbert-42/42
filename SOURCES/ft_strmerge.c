/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmerge.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealbert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/11 17:59:32 by ealbert           #+#    #+#             */
/*   Updated: 2016/03/11 18:02:00 by ealbert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_strmerge(char **s1, char **s2)
{
	char	*tmp;

		if (!(*s1))
			*s1 = *s2;
		else
		{
			tmp = ft_strjoin(*s1, *s2);
			free(*s1);
			free(*s2);
			*s1 = tmp;
		}
}
