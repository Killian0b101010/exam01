#include <unistd.h>

int	main(int ac, char **argv)
{
	int i = 0;
	if (ac == 4)
	{
		while (argv[1][i])
		{
			if (argv[1][i] == argv[2][0])
				write(1, &argv[3][0], 1);
			else
				write(1, &argv[1][i], 1);
			i++;
		}
	}
	return (write(1, "\n", 1), 0);
}