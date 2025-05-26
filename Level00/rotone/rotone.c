#include <unistd.h>

char	rot_1(char c)
{
	if (c >= 'A' && c <= 'Y' || c >= 'a' && c <= 'y')
		return (c + 1);
	else if (c == 'Z')
		return (c - 25);
	else if (c == 'z')
		return (c - 25);
}
int	main(int ac, char **argv)
{
	int i = 0;
	if (ac == 2)
	{
		while (argv[1][i])
		{
			char result = rot_1(argv[1][i]);
			write(1, &result, 1);
			i++;
		}
		return (write(1, "\n", 1), 0);
	}
}