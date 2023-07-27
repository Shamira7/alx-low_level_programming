#include "main.h"
#include <stdio.h>

/**
 * string_toupper - Changes lowercase letters to uppercase.
 * @str: The string to be changed
 * Return: String with all letters changed to uppercase.
 */

char *string_toupper(char *s)

{
	int i = 0;

	while (*(s + i) != '\0')
	{
	if (*(s + i) >= 'a' && *(s + i) <= 'z')
	{
	*(s + i) = *(s + i) - 32;
	}
	i++;
	}
	return (s);
}
