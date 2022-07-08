#include "main.h"
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
		printf("%d", num);

		if (str)
			printf("%s", str);
		else
			printf("(nil)");

		if (i < (n - 1) && separator)
			printf("%s", separator);
	}
	putchar('\n');
	va_end(argstr);
}
