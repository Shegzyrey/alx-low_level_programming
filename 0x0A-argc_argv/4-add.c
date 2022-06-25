#include <stdio.h>
#include "main.h"
#include <ctype.h>
#include <stdlib.h>

/**
 * main - blank
 * @argc: number of entry
 * @argv: array containing all entered variables
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;
	int add;
	int sum;

	for (i = 1; i < argc; i++)
	{
		if (argc > 1)
		{
			sum += atoi(argv[i]);

			printf("%d\n", add);
		}
		else if (argc == 1)
		{
			printf("0\n");
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		return (0);
	}
}
