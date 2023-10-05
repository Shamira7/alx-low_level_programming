#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *string_nconcat - concatenates two strings
 * @s1: allocated space in memory
 * @s2: allocated space in memory
 * @n: bytes
 * Return: 0 when successful,
 * or NULL otherwise
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int h = 0, o = 0, m = 0, e = 0;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[h])
		h++;

	while (s2[m])
		m++;

	if (n >= m)
		e = h + m;
	else
		e = h + n;

	str = malloc(sizeof(char) * e + 1);
	if (str == NULL)
		return (NULL);

	m = 0;
	while (o < e)
	{
		if (m <= h)
			str[o] = s1[o];

		if (o >= h)
		{
			str[o] = s2[m];
			m++;
		}
		o++;
	}
	str[o] = '\0';
	return (str);
}
