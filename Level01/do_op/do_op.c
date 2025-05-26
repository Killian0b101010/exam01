#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int	main(int ac, char **argv)
{
	int	result;
	int	a;
	int	b;

	if (ac == 4)
	{
		a = atoi(argv[1]);
		b = atoi(argv[3]);
		result = 0;
		if ((argv[2][0] == '/' || argv[2][0] == '%') && b == 0)
		{
			printf("0\n");
			return (0);
		}
		if (argv[2][0] == '+')
			result = a + b;
		else if (argv[2][0] == '-')
			result = a - b;
		else if (argv[2][0] == '*')
			result = a * b;
		else if (argv[2][0] == '/')
			result = a / b;
		else if (argv[2][0] == '%')
			result = a % b;
		else
		{
			printf("0\n");
			return (0);
		}
		printf("%d\n", result);
		return (0);
	}
	printf("\n");
	return (0);
}
