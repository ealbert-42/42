/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealbert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 11:02:13 by ealbert           #+#    #+#             */
/*   Updated: 2015/11/23 14:15:41 by ealbert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *b, int c, size_t len)
{
	int				i;
	char			*tmp;
	unsigned char	fill;

	tmp = (char *)b;
	i = 0;
	fill = c;
	while (d[i])
		i++;
	while (len != 0)
	{
		b[i] = fill;
		i++;
		len--;
	}
	return ((void *)b);
}
