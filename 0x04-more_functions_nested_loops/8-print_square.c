#include "main.h"

/**
 * print_square - printing squares
 * @size: knowing the size of the square
 * Return: void
 */

void print_square(int size)
{
	int len = 0;
	int bre = 0;

	if (size > 0)
	{

		while (len < size)
		{
			while (bre < size)
			{
				_putchar('#');
				bre++;
			}

			bre = 0;
			len++;
			_putchar('\n');

		}

	}

	else
		_putchar('\n');

}
