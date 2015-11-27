#include <stdio.h>

int		ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

int		ft_isprint(int c)
{
	if (c >= 32 && c <= 255)
		return (1);
	return (0);
}

int		ft_isalnum(int c)
{
	if ((c > 47 && c < 58) || (c > 64 && c < 91) || (c > 97 && c < 123))
		return (1);
	return (0);
}

int		ft_isdigit(int c)
{
	if (c < 58 && c > 47)
		return (1);
	return (0);
}

int		ft_isalpha(int c)
{
	if ((c > 64 && c < 91) || (c < 123 && c > 96))
		return (1);
	return (0);
}

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

int	main(int argc, char **argv)
{
	int	a;

	if (argc != 2)
	{
		printf("Wrong input");
		return (0);
	}
	a = ft_atoi(argv[1]);
	printf("Votre nombre est : %d\nEn Ascii c'est : %c\nC'est donc :\n-Un caractère ASCII : %d\n-Un caractère imprimable : %d\n-Un caractère alphanumérique : %d\n-Un nombre : %d\n-Une lettre : %d\n", a, a, ft_isascii(a), ft_isprint(a), ft_isalnum(a), ft_isdigit(a), ft_isalpha(a));
	return (0);
}
