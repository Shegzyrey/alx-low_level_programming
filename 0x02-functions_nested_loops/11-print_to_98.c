#include "main.h"
#include <stdio>

/**
 * print_to_98 - function to print 00-98
 * @n: initial number
 * Return: 0 or 1
 */

void print_to_98(int n)
{
	while (n < 98)
	{
		printf("%i, ", n);
		n++;
	}
	while (n > 98)
	{
		printf("%i, ", n);
		n--;
	}
	printf("98");
	putchar('\n');

}
