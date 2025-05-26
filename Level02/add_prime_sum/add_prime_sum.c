#include <unistd.h>

// un nombre premier se divise soit pas lui soit par 1
int	is_prime(unsigned int n)
{
	int	i;

	i = 2;
	if (n < 2)
		return (0);
	while (i < n)
	{
		if (n % i == 0)
			return (0);
		i++;
	}
	return (1);
}
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int n)
{
	if (n < 0)
	{
		ft_putchar('-');
		n = -n;
	}
	if (n >= 10)
		ft_putnbr(n / 10);
	ft_putchar(n % 10 + '0');
}

int	ft_atoi(char *str)
{
	int	i;
	int	total;

	i = 0;
	total = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		total = (total * 10) + (str[i] - '0');
		i++;
	}
	return (total);
}
int	add_prime_sum(int n)
{
	int	i;

	i = 0;
	while (n > 1)
	{
		if (is_prime(n))
			i = n + i;
		n--;
	}
	return (i);
}
int	main(int ac, char **argv)
{
	if (ac == 2)
		ft_putnbr(add_prime_sum(ft_atoi(argv[1])));
	else
		ft_putnbr(0);
	return (write(1, "\n", 1), 0);
}