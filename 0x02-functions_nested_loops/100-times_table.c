#include "main.h"

/**
 * print_times_table - prints product values
 *
 * @n: number used in multiplication
 *Description: return table without fifteen  amd below
 * Return: void
 */

void print_times_table(int n)
{

	int r, c, product;

	if (n < 0 || n > 15)
		return;

	while (r <= n)
	{
		for (c = 0; c <= n; c++)
		{
			product = r * c;
			if (c == 0)
				_putchar('0' + product);
			else if (product < 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + product);
			}
			else if (product < 100)
			{
				_putchar(' ');
				_putchar('0'  + product / 10);
				_putchar('0' + product % 10);
			}
			else
			{
				_putchar('0' + product / 100);
				_putchar('0' + (product - 100) / 10);
				_putchar('0' + product % 10);
			}
			if (c < n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
		r++;
	}
}
