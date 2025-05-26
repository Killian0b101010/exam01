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
