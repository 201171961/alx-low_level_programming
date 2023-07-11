#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. array
 */
int **alloc_grid(int width, int height)
{
	int **d;

	int b, c;

	if (width <= 0 || height <= 0)
		return (NULL);
	d = malloc(sizeof(int *) * height);

	if (d == NULL)
		return (NULL);

	for (b = 0; b < height; b++)
	{
		d[b] = malloc(sizeof(int) * width);

		if (d[b] == NULL)
		{
			for (; b >= 0; b--)

				free(d[b]);
			free(d);
			return (NULL);
		}
	}
	for (b = 0; b < height; b++)
	{
		for (c = 0; c < width; c++)
			d[b][c] = 0;
	}
	return (d);
}
