#include <unistd.h>

int	main(int argc, char **argv)
{
	int i = 0;

	if (argc != 2)
	{
		write(1, "\n", 1);
		return 0;
	}

	while (argv[1][i] != '\0')
	{
		char c = argv[1][i];
		if (c >= 'A' && c <= 'Z')
			c = c + 32;//* cambia a mayus
			
		else if (c >= 'a' && c <= 'z')
			c = c - 32;//* cambia a minus
		write (1, &c, 1);
		i++;
	}
	write(1, "\n", 1);
	return 0;
}
