unsigned int	pgcd(unsigned int a, unsigned int b)
{
	unsigned int	temp;

	while (b != 0)
	{
		temp = a % b;
		a = b;
		b = temp;
	}
	return (a);
}

unsigned int	lcm(unsigned int a, unsigned int b)
{
	if ((int)a <= 0 || (int)b <= 0)
		return (0);
	return (a / pgcd(a, b) * b);
}
