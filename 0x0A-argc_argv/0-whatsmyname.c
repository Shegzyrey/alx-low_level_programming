#include <stdio.h>
#include "main.h"

/**
 * main - print program name
 * @argc: number of entry
 * @argv: array containing all entered variables
 *
 * Return: 0
 */

int main(__attribute__((unused)) int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
