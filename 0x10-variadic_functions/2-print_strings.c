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
	unsigned int i;
	
	char *str;

	va_start(argstr, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(argstr, char*);

		if (str == NULL)
			printf("(nil)");
		else
		{

			if (i < (n - 1) && separator != 0)
				printf("%s%s", str, separator);
			else
				print("%s", str);
		}
	}
	printf("\n");
	va_end(argstr);
}
