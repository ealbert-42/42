/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealbert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 17:41:10 by ealbert           #+#    #+#             */
/*   Updated: 2017/05/23 18:29:46 by ealbert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Returns an integer out of a string. If no number are in the string, the
** functions returns 0.
**/

int		ft_atoi(const char *str)
{
	int		i;
	int		dst;
	int		sign;

	i = 0;
	dst = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
			|| str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
		i++;
	sign = (str[i] == '-') ? -1 : 1;
	i += (str[i] == '+' || str[i] == '-') ? 1 : 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		dst = (dst * 10) + (str[i] - 48);
		i++;
	}
	return (dst * sign);
}
