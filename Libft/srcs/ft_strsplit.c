/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealbert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 12:08:16 by ealbert           #+#    #+#             */
/*   Updated: 2015/11/24 13:22:15 by ealbert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	**tab_filler(char **tab, const char *s, int *index, char c)
{
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	k = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			tab[j][k] = '\0';
			j++;
			k = 0;
		}
		else
		{
			tab[j][k] = s[i];
			k++;
		}
		i++;
	}
	tab[j][k] = '\0';
	return (tab);
}

char	**ft_strsplit(const char *s, char c)
{
	char	**tab;
	int		*i;
	int		j;
	int		k;
	int		l;

	k = 0;
	j = -1;
	l = -1;
	i = &j;
	while (s[++j] != '\0')
	{
		if (s[j] == c)
		{
			i[k] = j - i[k - 1];
			k++;
		}
	}
	tab = malloc(sizeof(char *) * k);
	while (++l <= k)
	{
		tab[l] = malloc(sizeof(char) * i[l]);
	}
	tab = tab_filler(tab, s, i, c);
	return (tab);
}
