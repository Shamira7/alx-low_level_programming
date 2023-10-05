#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *array_range - creates an array of integers
 * @min: minimum value of integer
 * @max: maximum value of integer
 * Return: If min > max, return NULL,
 * or If malloc fails, return NULL
 */

int *array_range(int min, int max)
{
	int *c, o = 0;

	if (min > max)
		return (NULL);

	c = malloc((sizeof(int) * (max - min)) + sizeof(int));

	if (c == NULL)
		return (NULL);

	while (min <= max)
	{
		c[o] = min;
		o++;
		min++;
	}

	return (c);
}
