/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealbert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 16:18:26 by ealbert           #+#    #+#             */
/*   Updated: 2015/11/25 18:15:41 by ealbert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	int		i;
	char	*tmp;
	void	*finally;

	tmp = (char *)s;
	i = 0;
	while (tmp[i])
	{
		if (tmp[i] == c)
		{
			finally = (void *)&tmp[i];
			return (finally);
		}
		i++;
	}
	return (0);
}
