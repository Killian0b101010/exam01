#include <unistd.h>

int	main(int ac, char **argv)
{
	int result;
	int resultmaj;
	int i = 0;
	if (ac == 2)
	{
		while (argv[1][i])
		{
			if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
			{
				int result = (argv[1][i] - 'a') + 1;
				while (result > 0)
				{
					write(1, &argv[1][i], 1);
					result--;
				}
			}
			else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
			{
				resultmaj = (argv[1][i] - 'A') + 1;
				while (resultmaj > 0)
				{
					write(1, &argv[1][i], 1);
					resultmaj--;
				}
			}
			else
				write(1, &argv[1][i], 1);
			i++;
		}
	}
	return (write(1, "\n", 1), 0);
}