#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	count_digits(int n)
{
	int	count;

	count = (n <= 0) ? 1 : 0;
	while (n)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*str;
	long	nb;

	len = count_digits(n);
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	nb = n;
	if (nb < 0)
	{
		str[0] = '-';
		nb = -nb;
	}
	if (nb == 0)
		str[0] = '0';
	while (nb > 0)
	{
		str[--len] = (nb % 10) + '0';
		nb /= 10;
	}
	return (str);
}
#include <stdio.h>

int	main(void)
{
	char	*s;

	s = ft_itoa(-2147483648);
	printf("%s\n", s); // "-2147483648"
	free(s);
	return (0);
}
