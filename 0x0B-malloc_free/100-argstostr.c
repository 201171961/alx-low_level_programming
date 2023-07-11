#include "main.h"
#include <stdlib.h>
/**
 * argstostr - main entry
 * @ac: int input
 * @av: double pointer array
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
	int j, x, w = 0, k = 0;

	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (j = 0; j < ac; j++)
	{
		for (x = 0; av[j][x]; x++)
			k++;
	}
	k += ac;

	str = malloc(sizeof(char) * k + 1);

	if (str == NULL)

		return (NULL);

	for (j = 0; j < ac; j++)
	{
	for (x = 0; av[j][x]; x++)
	{
		str[w] = av[j][x];
		w++;
	}
	if (str[w] == '\0')
	{
		str[w++] = '\n';
	}
	}
	return (str);
}

