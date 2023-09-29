#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: number of lines in argument argv
 * @argv: argument
 * Return: 0 when successful
 * or 1 otherwise
 */

int main(int argc, char *argv[])
{
	int d = 0, t = 0;

	if (argc == 3)
	{
		d = atoi(argv[1]);
		t = atoi(argv[2]);
		printf("%d\n", d * t);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
