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

	for (i = 0; i < argc; i++)
	{
		_putchar(argv[i]);
		return (0);
	}
}
