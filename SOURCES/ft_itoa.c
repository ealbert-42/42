/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealbert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 16:30:55 by ealbert           #+#    #+#             */
/*   Updated: 2017/05/23 18:37:22 by ealbert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Returns a string containing the 'n' number.
*/

#include "libft.h"

char		*ft_itoa(int n)
{
	char			*s;
	int				len;
	unsigned int	nb;
	int				sign;
	
	sign = (n < 0) ? 1 : 0;
	len = (sign) ? 1 : 0;
	nb = (sign) ? -n : n;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	if (!(s = (char *)malloc(sizeof(char) * len + 1)))
		return ((char *)0);
	s[0] = '0';
	s[len--] = '\n';
	while (nb)
	{
		s[len--] = nb % 10 + '0';
		nb /= 10;
	}
	s[0] = (sign) ? '-' : s[0];
	return (s);
}
