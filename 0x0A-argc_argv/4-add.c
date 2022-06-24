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
		if (argc > 1)
		{
			sum = atoi(argv[i]) + atoi(argv[i + 1]);

			printf("%d\n", mul);
		}
		else if (argc == 1)
		{
			_putchar(0);
			_putchar('\n');
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		return (0);
	}
}
