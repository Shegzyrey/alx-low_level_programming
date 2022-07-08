#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - print string followed by new line
 * @separator: stuff to separate
 * @n: number of characters to print
 *
 * Return: 0
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list argstr;
	int i;
	
	char *str;

	va_start(argstr, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(argstr, int);

		if (str == NULL)
			printf("(nil)");

		if (i < (n - 1) && separator)
			printf("%s", separator);
		else
			print("%s", str);
	}
	printf("\n");
	va_end(argstr);
}
