#include "main.h"

/**
 * more_numbers - print numbers 0-14 times 10
 * Return: void
 */

void more_numbers(void)
{

	int num = 0;
	int count = 0;

	while (count <= 9)
	{

		while (num <= 14)
		{
			if (num > 9)

				_putchar(num / 10 + '0');
			_putchar(num % 10 + '0');

			num++;

		}

		_putchar('\n');
		count++;

		num = 0;
	}
}
