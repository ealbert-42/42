/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealbert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 15:05:24 by ealbert           #+#    #+#             */
/*   Updated: 2017/05/24 20:33:18 by ealbert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Writes the 'c' byte in the 'fd' file descriptor.
*/

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	if (fd < 1)
		return ;
	write(fd, &c, 1);
}
