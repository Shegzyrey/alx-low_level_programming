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
	int number;

	for (number = '0';  number <= '9';  number++)
	{
		putchar(number);

		if (number != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
