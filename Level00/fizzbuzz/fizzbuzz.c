#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}
void	ft_putchar(char c)
{
	write(1, &c, 1);
}
void	ft_putnbr(int nb)
{
	if (nb >= 10)
		ft_putnbr(nb / 10);
	ft_putchar(nb % 10 + '0');
}

int	main(void)
{
	int	result;

	result = 1;
	while (result <= 100)
	{
		if (result % 5 == 0 && result % 3 == 0)
			ft_putstr("fizzbuzz\n");
		else if (result % 5 == 0)
			ft_putstr("buzz\n");
		else if (result % 3 == 0)
			ft_putstr("fizz\n");
		else
		{
			ft_putnbr(result);
			write(1, "\n", 1);
		}
		result++;
	}
}
