/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealbert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/08 18:29:27 by ealbert           #+#    #+#             */
/*   Updated: 2016/04/08 19:18:27 by ealbert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	nblen(int nb, int len)
{
	int		i;

	i = 0;
	if (nb <= 0)
		i++;
	while (nb)
	{
		nb /= len;
		i++;
	}
	return (i + 1);
}

static int	matching(char *base)
{
	int		i;
	int		j;

	i = 0;
	if (!base[i])
		return (-1);
	while (base[i + 1])
	{
		j = i + 1;
		while (base[j])
		{
			if (base[j] == base[i])
				return (-1);
			j++;
		}
		i++;
	}
	return (i + 1);
}

char		*ft_itoa_base(int nb, char *base)
{
	char	*new;
	int		len;
	int		len2;
	int		nb;

	if ((len = matching(base)) <= 1)
		return (NULL);
	len2 = nblen(nb, len);
	if (!(new = malloc(sizeof(char) * len2)))
		return (NULL);
	str[--len2] = '\0';
	nb = (unsigned int)((value < 0) ? -value : value);
	while (nb)
	{
		str[--len2] = base[nb % len];
		nb /= len;
	}
	if (value < 0)
		str[0] = '-';
	return (new);
}
