#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - duplicates to new memory space location
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	char *jj;

	int y, z = 0;

	if (str == NULL)
		return (NULL);

	y = 0;

	while (str[y] != '\0')
		y++;
	jj = malloc(sizeof(char) * (y + 1));

	if (jj == NULL)
		return (NULL);

	for (z = 0; str[z]; z++)

		jj[z] = str[z];

	return (jj);
}
