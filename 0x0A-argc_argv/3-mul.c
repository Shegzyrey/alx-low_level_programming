#include <stdio.h>
#include "main.h"

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
	int mul;

	for (i = 0; i < argc; i++)
	{
		if (argc > 0 && argc <= 2)
		{
			mul = atoi(argv[i]) * atoi(argv[i + 1]);

			printf("%d\n", mul);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		return (0);
	}
}
