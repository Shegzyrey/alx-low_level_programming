#include <stdio.h>
/**
 *main-entry point for the program.
 *
 *
 *Return: return the possible combinations of units in imtegerd
 *
 *
 */
int main(void)
{
	int number0, number1, zero = '0';

	for (number0 = '0';  number0 <= '9';  number0++)
	{
		for (number1 = zero; number1 <= '9'; number1++)
		{
			if (number0 < number1)
			{
				putchar(number0);
				putchar(number1);
			}
/**			if (number0 == number1)
			{
				continue;
			}
*/
			if (number0 != '9' || number1 != '9')
			{
				putchar(',');
				putchar(' ');
			}
		}
		zero++;
	}
	putchar('\n');

	return (0);
}
