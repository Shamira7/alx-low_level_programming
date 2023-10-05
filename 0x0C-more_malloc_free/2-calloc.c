#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: number of members
 * @size: size
 * Return: If nmemb or size is 0, then _calloc returns NULL,
 * or If malloc fails, then _calloc returns NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int p = 0, o = 0;
	char *c;

	if (nmemb == 0 || size == 0)
		return (NULL);

	o = nmemb * size;
	c = malloc(o);

	if (c == NULL)
		return (NULL);

	while (p < o)
	{
		c[p] = 0;
		p++;
	}

	return (c);
}
