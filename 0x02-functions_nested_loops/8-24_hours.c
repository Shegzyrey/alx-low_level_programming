#include "main.h"

/**
 *jack_bauer -replicating clock
 *Description: print every minute
 * Return: void
 */

void jack_bauer(void)
{
	int h1, h2, m1, m2, hmax;

	hmax = 9;
	h1 = '0';
	while (h1 <= '2')
	{
		if (h1 == '2')
		{
			hmax = '3';
		}
		h2 = '0';
		while (h2 <= hmax)
		{
			m1 = '0';
			while (m1 <= '5')
			{
				m2 = '0';
				while (m2 <= '9')
				{
					_putchar(h1);
					_putchar(h2);
					_putchar(':');
					_putchar(m1);
					_putchar(m2);
					_putchar('\n');
					m2++;
				}
				m1++;
			}
			h2++;
		}
		h1++;
	}

}
