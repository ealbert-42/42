/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealbert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 15:03:25 by ealbert           #+#    #+#             */
/*   Updated: 2017/05/24 20:34:52 by ealbert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Prints the 's' string on the terminal, followed by a newline.
*/

#include "libft.h"

void	ft_putendl(const char *s)
{
	int		i;
	char	bs;

	i = 0;
	bs = '\n';
	while (s[i] != '\0')
	{
		write(1, &s[i], 1);
		i++;
	}
	write(1, &bs, 1);
}
