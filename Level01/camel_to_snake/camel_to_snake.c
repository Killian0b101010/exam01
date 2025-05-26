/*Écris un programme qui prend une chaîne unique au format lowerCamelCase
et la convertit en une chaîne au format snake_case.

	Une chaîne en lowerCamelCase est une chaîne où chaque mot commence par une majuscule,
		sauf le premier mot qui commence par une minuscule.

	Une chaîne en snake_case est une chaîne où tous les mots sont en minuscules,
		séparés par un underscore _.

Examples:
$>./camel_to_snake "hereIsACamelCaseWord"
here_is_a_camel_case_word
$>./camel_to_snake "helloWorld" | cat -e
hello_world$
$>./camel_to_snake | cat -e
$
*/

#include <unistd.h>

int	main(int ac, char **argv)
{
	if (ac >= 2)
	{
		int i = 0;
		while (argv[1][i])
		{
			if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
			{
				write(1, "_", 1);
				argv[1][i] = argv[1][i] + 32;
				write(1, &argv[1][i], 1);
				i++;
			}
			else
				write(1, &argv[1][i++], 1);
		}
	}
	return (write(1, "\n", 1), 0);
}