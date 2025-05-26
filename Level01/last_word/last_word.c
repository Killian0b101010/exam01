#include <unistd.h>

int	main(int ac, char **argv)
{
	int end = 0;
	int start;

	if (ac == 2)
	{
		start = 0;
		while (argv[1][end])
			end++;
		end--;
		while (end >= 0 && (argv[1][end] == ' ' || argv[1][end] == '\t'))
			end--;
		start = end;
		while (start >= 0 && argv[1][start] != ' ' && argv[1][start] != '\t')
			start--;
		start++;
		while (start <= end)
		{
			write(1, &argv[1][start], 1);
			start++;
		}
	}
	return (write(1, "\n", 1), 0);
}