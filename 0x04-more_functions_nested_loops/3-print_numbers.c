#include "main.h"
#include <stdio.h>

/**
 * print_numbers - printing numbers
 * Return: void
 */

void print_numbers(void)
{
	char i = 0;

	while (i <= 9)
	{
		_putchar('0' + i);

		i++;
	}

	_putchar('\n');

}
