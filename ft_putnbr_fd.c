/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealbert <ealbert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 16:16:16 by ealbert           #+#    #+#             */
/*   Updated: 2015/12/01 17:57:37 by ealbert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int nb, int fd)
{
	if (nb == -2147483648)
		ft_putstr_fd("-2147483648", fd);
	else
	{
		if (nb < 0)
		{
			ft_putchar_fd('-', fd);
			nb = nb * -1;
		}
		if (nb > 10)
		{
			ft_putnbr_fd((nb / 10), fd);
			ft_putnbr_fd((nb % 10), fd);
		}
		else
			ft_putchar_fd(nb + '0', fd);
	}
}
