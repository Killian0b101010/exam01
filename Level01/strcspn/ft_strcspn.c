#include <stdio.h>
#include <string.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
	size_t	tr_s;
	size_t	tr_re;
	size_t	len;

	tr_s = 0;
	tr_re = 0;
	len = strlen(s);
	while (s[tr_s])
	{
		tr_re = 0;
		while (reject[tr_re])
		{
			if (s[tr_s] == reject[tr_re])
				return (tr_s);
			tr_re++;
		}
		tr_s++;
	}
	return (tr_s);
}

int	main(void)
{
	size_t	mylen;

	mylen = ft_strcspn("bens49", "39");
	printf("%lu\n", mylen);
}
