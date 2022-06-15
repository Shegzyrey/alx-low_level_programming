#include "main.h"

/**
 * _puts - prints strings to 1
 *
 * @str: string to be printed
 *
 * return: always 0
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{

		_putchar(str[i]);

		i++;

	}

	_putchar('\n');
}
