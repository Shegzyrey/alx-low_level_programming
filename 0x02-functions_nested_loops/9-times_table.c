#include "main.h"

/**
 *times_table - doing times table
 * Return: void
 */

void times_table(void)
{
	int row, column, product;

	while (row <= 9)
	{
		column = 0;
		while (column <= 9)
		{
			product = row * column;

			if (column == 0)
			{
				_putchar('0' + product);
			}
			else if (product < 10)
			{
				_putchar(' ');
				_putchar('0' + product);
			}
			else
			{
				_putchar('0' + product / 10);
				_putchar('0' + product % 10);
			}

			if (column < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			column++
		}
		_putchar('\n');
		row++;
	}
}
