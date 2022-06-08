#include "main.h"

/**
 *jack_bauer -replicating clock
 *Description: print every minute
 * Return: void
 */

void jack_bauer(void)
{
	int h1 = 0, h2 = 0, m1 = 0, m2 = 0;

	while (h1 <= 2)
	{
		while (h2 <= 4)
		{
			while (m1 <= 5)
			{
				while (m2 <= 9)
				{
					_putchar(h1);
					_putchar(h2);
					_putchar(':');
					_putchar(m1);
					_putchar(m2);
					_putchar('\n');
					m2++;
				}
				m2++;
			}
			m1++;
		}
		h2++;
	}
	h1++;

}
