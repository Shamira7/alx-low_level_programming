#include "main.h"
#include <stdlib.h>

/**
 * *_strdup - copy of the string given as a parameter
 * @str: string
 * Return: _strdup function returns a pointer to the duplicated string,
 * or NULL if insufficient memory was available
 */

char *_strdup(char *str)
{
	int c = 0, h = 1;
	char *e;

	if (str == NULL)
		return (NULL);

	while (str[h])
	{
		h++;
	}

	e = malloc((sizeof(char) * h) + 1);

	if (e == NULL)
		return (NULL);

	while (c < h)
	{
		e[c] = str[c];
		c++;
	}

	e[c] = '\0';
	return (e);
}
