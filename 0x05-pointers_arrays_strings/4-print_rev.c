#include "main.h"

/**
 * print_rev - print a string in reverse
 *
 * @s: string value to be reversed
 *
 * return: Always 0
 */

void print_rev(char *s)
{
	int n = 0;

	while (str[n] != '\0')
	{
		n++;
	}
	while ( str[n] >= '\0')
	{
		_putchar(str[n]);

		n--;
	}

	_putchar('\n');

}
