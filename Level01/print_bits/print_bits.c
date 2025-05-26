#include <stdio.h>
#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int		i;
	char	bit;

	i = 8;
	while (i--)
	{
		bit = ((octet >> i) & 1 + '0');
		write(1, &bit, 1);
	}
}
unsigned char	swap_bits(unsigned char octet)
{
	return (octet >> 4) | (octet << 4);
}
unsigned char	reverse_bits(unsigned char octet)
{
	int				i;
	unsigned char	bit;

	i = 8;
	while (i--)
	{
		bit = (bit << 1) | (octet & 1);
		octet >>= 1;
		printf(bit);
	}
	return (bit);
}
