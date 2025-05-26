#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

// Un nombre premier c'est un nombre qui se divise soit par lui mm soit par 1
void	fprime(int n)
{
	int	nt;

	nt = 2;
	if (n == 1)
	{
		printf("1\n");
		return ;
	}
	while (nt <= n)
	{
		if (n % nt == 0)
		{
			printf("%d", nt);
			n = n / nt;
			if (n > 1)
				printf("*");
		}
		else
			nt++;
	}
	printf("\n");
}

int	main(int ac, char **argv)
{
	if (ac == 2)
		fprime(atoi(argv[1]));
	else
		printf("\n");
	return (0);
}