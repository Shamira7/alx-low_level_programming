#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * @size: size of the array
 * @c: char to fill the array
 * Return: pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	unsigned int f;
	char *m;

	if (size == 0)
		return (NULL);

	m = malloc(size * sizeof(char));

	if (m == NULL)
		return (NULL);

	for (f = 0; f < size; f++)
	{
		m[f] = c;
	}

	return (m);
}
