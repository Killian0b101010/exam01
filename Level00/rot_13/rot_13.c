#include <unistd.h>

char	rot_13(char c)
{
	if (c >= 'A' && c <= 'M')
		return (c + 13);
	else if (c >= 'a' && c <= 'm')
		return (c + 13);
	else if (c >= 'N' && c <= 'Z')
		return (c - 13);
	else if (c >= 'n' && c <= 'z')
		return (c - 13);
	else
		return (c);
}
int	main(int ac, char **argv)
{
	int i = 0;
	if (ac == 2)
	{
		while (argv[1][i])
		{
			char result = rot_13(argv[1][i]);
			write(1, &result, 1);
			i++;
		}
		return (write(1, "\n", 1), 0);
	}
}