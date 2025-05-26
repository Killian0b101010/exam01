#include <unistd.h>

int	main(int ac, char **argv)
{
	if (ac == 2)
	{
		int i = 0;
		while (argv[1][i])
		{
			if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
			{
				argv[1][i] = 'a' + 'z' - argv[1][i];
				write(1, &argv[1][i++], 1);
			}
			else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
			{
				argv[1][i] = 'a' + 'z' - argv[1][i];
				write(1, &argv[1][i++], 1);
			}
			else
				write(1, &argv[1][i++], 1);
		}
		return (write(1, "\n", 1), 0);
	}
}