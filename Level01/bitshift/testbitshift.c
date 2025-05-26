#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int	i;

	i = 8;
	while (i--)
	{
		write(1, (octet & (1 << i)) ? "1" : "0", 1);
	}
}
unsigned char	swap_bits(unsigned char c)
{
	return (c >> 4) | (c << 4);
}
unsigned char	reverse_bits(unsigned char c)
{
	unsigned char	res;

	res = 0;
	for (int i = 0; i < 8; i++)
	{
		res <<= 1; // decale vers la gauche
		res |= (c & 1); // prend le bit de droite
		c >>= 1; // passe au bit suivant
	}
	return (res);
}
int	main(void)
{
	unsigned char	c;
	unsigned char	swapped;

	c = 0b01001101;
	print_bits(c);
	write(1, "\n", 1);
	swapped = swap_bits(c);
	print_bits(swapped);
	return (0);
}
