#include <unistd.h>

int	ft_doublon(char *str, int pos)
{
	int	i;

	i = 0;
	while (i < pos)
	{
		if (str[i] == str[pos])
			return (1);
		i++;
	}
	return (0);
}

int	main(int ac, char **argv)
{
	int i = 0;
	int j;

	if (ac == 3)
	{
		while (argv[1][i])
		{
			if (!ft_doublon(argv[1], i))
				write(1, &argv[1][i], 1);
			i++;
		}
		i = 0;
		while (argv[2][i])
		{
			j = 0;
			while (argv[1][j] && argv[1][j] != argv[2][i])
				j++;
			if (!argv[1][j] && !ft_doublon(argv[2], i))
				write(1, &argv[2][i], 1);
			i++;
		}
		write(1, "\n", 1);
		return (0);
	}