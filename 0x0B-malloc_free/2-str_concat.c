#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *str_concat - concatenates two strings
 * @s1: string one
 * @s2: string two
 * Return: the result of s1 and s2 concatenated,
 * or NULL otherwise
 */

char *str_concat(char *s1, char *s2)
{
	int s = 0, p = 0, i = 0, k = 0;
	char *e;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[s])
		s++;

	while (s2[p])
		p++;

	k = s + p;
	e = malloc((sizeof(char) * k) + 1);

	if (e == NULL)
		return (NULL);

	p = 0;

	while (i < k)
	{
		if (i <= s)
			e[i] = s1[i];

		if (i >= s)
		{
			e[i] = s2[p];
			p++;
		}

		k++;
	}

	e[i] = '\0';
	return (e);
}
