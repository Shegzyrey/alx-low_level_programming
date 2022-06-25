#include <stdio.h>
#include "main.h"
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
	int mul;

	if (argc ==3)
	{
		mul = atoi(argv[1]) * atoi(argv[2]);

		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
