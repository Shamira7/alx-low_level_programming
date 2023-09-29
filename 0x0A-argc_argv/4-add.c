#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main -  adds positive numbers
 * @argc: number of lines in argument argv
 * @argv: argument
 * Return: 0 when successful
 * or 1 otherwise
 */

int main(int argc, char *argv[])
{
	int s;
	unsigned int a, sum = 0;
	char *m;

	if (argc > 1)
	{
		for (s = 1; s < argc; s++)
		{
			m = argv[s];

			for (a = 0; a < strlen(m); a++)
			{
				if (m[a] < 48 || m[a] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(m);
			m++;
		}

		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}

	return (0);
}
