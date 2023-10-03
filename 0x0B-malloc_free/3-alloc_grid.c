#include "main.h"
#include <stdlib.h>

/**
* **alloc_grid - 2 dimensional array of integers.
* @width: width of 2 dimensional array
* @height: height of 2 dimensional array
* Return: NULL on failure,
* or if width or height is 0 or negative, return NULL
*/

int **alloc_grid(int width, int height)
{
	int c, h, e, s;
	int **i;

	if (width <= 0 || height <= 0)
		return (NULL);

	i = malloc(sizeof(int *) * height);

	if (i == NULL)

	if (i == NULL)
	{
		free(i);
		return (NULL);
	}

	for (c = 0; c < height; c++)
	{
		i[c] = malloc(sizeof(int) * width);

		if (i[c] == NULL)
		{
			for (h = c; h >= 0; h--)
			{
				free(i[h]);
			}

			free(i);
			return (NULL);
		}
	}

	for (e = 0; e < height; e++)
	{
		for (s = 0; s < width; s++)
		{
			i[e][s] = 0;
		}
	}

	return (i);
}
