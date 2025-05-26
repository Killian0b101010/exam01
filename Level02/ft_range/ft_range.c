#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int start, int end)
{
	int *range;
	int size;
	int i;

	if (start <= end)
		size = end - start + 1;
	else
		size = start - end + 1;
	range = malloc(sizeof(int) * size);
	if (!range)
		return (NULL);
	i = 0;
	if (start <= end)
	{
		while (start <= end)
		{
			range[i] = start;
			start++;
			i++;
		}
	}
	else
	{
		while (start >= end)
		{
			range[i] = start;
			start--;
			i++;
		}
	}
	return (range);
}