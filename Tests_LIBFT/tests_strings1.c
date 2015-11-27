#include <stdio.h>
#include <stdlib.h>
#include <stddef.h> /* Représente Zoé Zeller :keurkeurlovegaec: */

int		ft_strlen(const char *s)
{
	int		i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcpy(char *dst, const char *src)
{
	int		i;

	i = 0;
	while (src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

char	*ft_strchr(const char *s, int c)
{
	int			i;
	char		*str;

	i = 0;
	while (s[i] != '\0' && s[i] != c)
		i++;
	if (s[i] == '\0')
		return (0);
	str = (char *)s;
	return (&str[i]);
}

void	ft_strdel(char **as)
{
	free(*as);
	*as = NULL;
}

int		ft_strequ(const char *s1, const char *s2)
{
	int		i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;
	if (s1[i] == '\0' && s2[i] == '\0')
		return (1);
	else
		return (0);
}

char	*ft_strcat(char *s1, const char *s2)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
	{
		s1[i] = s2[j];
		i++;
		j++;
	}
	s1[i] = '\0';
	return (s1);
}

char	*ft_strnew(size_t size)
{
	char	*new;
	unsigned int		i;

	if ((new = (char *)malloc(sizeof(char) * size)) == NULL)
		return (NULL);
	while (i < size)
	{
		new[i] = '\0';
		i++;
	}
	return (new);
}

int		ft_strcmp(const char *s1, const char *s2)
{
	int		i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*join;
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	k = -1;
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	join = (char *)malloc(sizeof(char) * (i + j));
	i = -1;
	j = -1;
	while (s1[++i] != '\0')
	{
		join[++k] = s1[i];
	}
	while (s2[++j] != '\0')
	{
		join[++k] = s1[j];
	}
	join[++k] = '\0';
	return (join);
}

char	*ft_strsub(const char *s, unsigned int start, size_t len)
{
	char	*new;
	int		bie;

	bie = 0;
	new = malloc(sizeof(char) * len + 1);
	while (bie < len)
	{
		new[bie] = s[start + bie];
		bie++;
	}
	new[bie] = '\0';
	return (new);
}

int	main(int argc, char **argv)
{
	char	*string;
	int	len1;
	char	*string2;
	int	equ;
	int	cmp;
	int	len2;
	char	*string3;
	char	*string4;
	
	if (argc != 4)
	{
		printf("Wrong input\n");
		return (0);
	}
	len1 = ft_strlen(argv[1]);
	len2 = ft_strlen(argv[2]);
	string = ft_strnew(len1 + len2 + 1);
	printf("Ft_strlen(argv[1] et argv[2]):\n\"%d\"\n\"%d\"\n\n", len1, len2);
	printf("Ft_strnew(deux lens + 1):\n\"%s\" (%d)\n\n", string, len1 + len2 + 1);
	cmp = ft_strcmp(argv[1], argv[2]);
	printf("Ft_strcmp(argv[1], argv[2]):\n\"%d\"\n\n", cmp);
	string = ft_strcpy(string, argv[1]);
	printf("Ft_strcpy(string(vide) , argv[1]):\n\"%s\"\n\n", string);
	string = ft_strcat(string, argv[2]);
	printf("Ft_strcat(string = argv[1], argv[2]):\n\"%s\"\n\n", string);
	string3 = ft_strjoin((const char *)string, (const char *)string);
	printf("Ft_strjoin(string, string) = string3:\n\"%s\"\n\n", string3);
	string4 = ft_strsub(string3, 0, len2);
	printf("Ft_strsub(string3, 0, len2) len2 = len du deuxième argument:\n\"%s\"\n\n", string4);
	equ = ft_strequ(argv[1], argv[2]);
	printf("Ft_strequ(argv[1], argv[2]):\n\"%d\"\n\n", equ);
	string2 = string;
	string = ft_strchr(string, argv[3][0]);
	printf("Ft_strchr(string, argv[3]):\n\"%s\" (enregistrée dans une autre string pour le strdel)\n\n", string);
	ft_strdel(&string2);
	printf("Ft_strdel(string):\n\"%s\"\n", string2);
	return (0);
}
