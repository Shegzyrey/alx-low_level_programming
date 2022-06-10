#include "main.h"

/**
 * print_diagonal - use \ to print diagonals
 * @n: number of n to be printed
 * Return: void
 */

void print_diagonal(int n)
{
	int slas = 0;
	int spac = 0;

	if (n > 0)
	{
		while (slas < n)
		{
			while(spac < slas)
			{
				_putchar(' ');
				spac++;
			}
			slas++;
			spac = 0;
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
