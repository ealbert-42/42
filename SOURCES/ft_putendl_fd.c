/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealbert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 16:11:21 by ealbert           #+#    #+#             */
/*   Updated: 2017/05/24 20:34:37 by ealbert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Prints the 's' string in the 'fd' file descriptor, followed by a newline.
*/

#include "libft.h"

void	ft_putendl_fd(const char *s, int fd)
{
	int		i;
	char	bs;

	if (fd < 1)
		return ;
	i = 0;
	bs = '\n';
	while (s[i] != '\0')
	{
		write(fd, &s[i], 1);
		i++;
	}
	write(fd, &bs, 1);
}
