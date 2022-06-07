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
	int number0, number1, number2;

	for (number0 = '0';  number0 <= '9';  number0++)
	{
		for (number1 = '0'; number1 <= '9'; number1++)
		{
			for (number2 = '0'; number2 <= '9'; number2++)
			{
				if (number0 < number1 && number1 < number2)
				{
					putchar(number0);
					putchar(number1);
					putchar(number2);
				}
				if (number0 == '7' && number1 == '8' && number2 == '9')
				{
					break;
				}	
				else
				{
					putchar(',');
					putchar(' ');
				}
			}	
		}
	}
	putchar('\n');

	return (0);
}
