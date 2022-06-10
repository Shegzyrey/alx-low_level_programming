#include "main.h"

/**
 * print_triangle - print triangles
 * @size: parameters
 * Return: 0
 */

void print_triangle(int size)
{
	int len, bre = 0;
	int gap;

	if (size > 0)
	{

		while (bre < size)
		{

			gap = size - bre - 1;
			while (len < size)
			{
				if (gap > len)
				{
					_putchar(' ');
				}
				else
				{
					_putchar('#');
				}
				len++;
			}
			bre++;
			len = 0;
			_putchar ('\n');
		}
	}
	else
		_putchar('\n');
}
