#include "variadic_functions.h"
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
	unsigned int i;

	va_start(argstr, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(argstr, int));

		if (i < n - 1 && separator)
			printf("%s", separator);
	}
	printf("\n");
	va_end(argstr);
}
