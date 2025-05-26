#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int	ft_whitespace(char c)
{
	if (c == ' ' || c == '\t' || c == '\n')
		return (1);
	return (0);
}
int	count_word(char *str)
{
	int	count_word;
	int	i;

	i = 0;
	count_word = 0;
	while (str[i] && ft_whitespace(str[i]))
		i++;
	while (str[i])
	{
		if (!ft_whitespace(str[i]))
			count_word++;
		while (!ft_whitespace(str[i]))
			i++;
		i++;
	}
	return (count_word);
}

char	*ft_strndup(char *str, int n)
{
	int		i;
	char	*dest;

	i = 0;
	dest = malloc(sizeof(char) * (n + 1));
	if (!dest)
		return (0);
	while (i < n && str[i])
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
char	**ft_split(char *str)
{
	int		i;
	int		j;
	int		start;
	char	**tab;

	i = 0;
	j = 0;
	tab = malloc(sizeof(char *) * (count_word(str) + 1));
	if (!tab)
		return (NULL);
	while (str[i])
	{
		while (str[i] && ft_whitespace(str[i]))
			i++;
		start = i;
		while (str[i] && !ft_whitespace(str[i]))
			i++;
		if (i > start)
		{
			tab[j] = ft_strndup(&str[start], i - start);
			if (!tab[j])
				return (NULL);
			j++;
		}
	}
	tab[j] = NULL;
	return (tab);
}
