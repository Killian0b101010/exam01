#include <unistd.h>

void	ft_reverse_str(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i])
		i++;
	i--;
	while (i >= 0)
	{
		write(1, &str[i], 1);
		i--;
	}
}

int	main(int ac, char **argv)
{
	if (ac == 2)
	{
		ft_reverse_str(argv[1]);
		return (write(1, "\n", 1), 0);
	}
	return (write(1, "\n", 1), 0);
}
