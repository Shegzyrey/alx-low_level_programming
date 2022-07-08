#include <stdio.h>
#include "variadic_functions.h"



/**
 *sum_them_all - a function to sum all values input
 *@n: numbeer of integers to be added
 *
 * Return: 0 or sum
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;

	va_list argstr;

	unsigned int i;

	va_start(argstr, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(argstr, int);
	}

	va_end(argstr);

	return (sum);
}
