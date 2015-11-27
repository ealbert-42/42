#include <stdio.h>

int		ft_tolower(int c)
{
	if (c > 64 && c < 91)
		c += 32;
	return (c);
}

int		ft_toupper(int c)
{
	if (c > 96 && c < 123)
		c -= 32;
	return (c);
}

int	main(int argc, char **argv)
{
	if (argc != 3)
	{
		printf("Wrong input");
		return (0);
	}
	printf("Votre caractère majuscule : %c\nRésultat to_lower : %c\nVotre caractère minuscule : %c\nRésultat to_upper : %c\n", argv[1][0], ft_tolower(argv[1][0]), argv[2][0], ft_toupper(argv[2][0]));
	return (0);
}
