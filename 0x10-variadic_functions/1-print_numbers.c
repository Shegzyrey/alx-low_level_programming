#include "main.h"
#include <stdio.h>

/**
 * print_numbers - function print numberds followed by new line
 * @separator: to be separated by
 * @n: number of integer to print
 *
 * Return: 0
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list argstr;
	int i;

	va_start(argstr, n);
	for (i = n; i >= 0; i = va_arg(argstr, int))
	{
		printf("%d ", i);

		if (i < n - 1 && separator)
			printf("%s", separator);
	}
	putchar('\n');
	va_end(argstr);
}
