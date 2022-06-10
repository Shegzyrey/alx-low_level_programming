#include "main.h"

/**
 * print_line - intro to graphics
 *@n: number of characters to be printed to give a line
 * Return: void
 */

void print_line(int n)
{
	int l;

	while (l > 0 && l < n)
	{
		_putchar('_');
		l++;
	}
	_putchar('\n');

}
