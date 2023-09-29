#include "main.h"
#include <stdio.h>

/**
 * main - prints all arguments it receives
 * @argc: the number of lines in the argument argv
 * @argv: argument
 * Return: 0 when successful
 */

int main(int argc, char *argv[])
{
	int p;

	for (p = 0; p < argc; p++)
	{
		printf("%s\n", argv[p]);
	}

	return (0);
}
