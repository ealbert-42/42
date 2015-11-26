/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealbert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 17:41:10 by ealbert           #+#    #+#             */
/*   Updated: 2015/11/23 17:56:34 by ealbert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(const char *str)
{
	int		i;
	int		dst;
	int		sign;

	i = 0;
	dst = 0;
	while (str[i] == ' ' || str[i] == '	')
		i++;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	else
		sign = 1;
	while (str[i] != '\0')
	{
		if (str[i] < 48 && str[i] > 57)
			return (0);
		dst = (dst * 10) + (str[i] - 48);
		i++;
	}
	return (dst * sign);
}
