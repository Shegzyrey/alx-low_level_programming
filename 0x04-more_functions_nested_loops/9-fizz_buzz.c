#include <stdio.h>

/**
 * main - fizz buzz
 *
 * Return: void.
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i == 100)
		{
			printf("buzz");
			printf("\n")
		}
		else if (i % 15 == 3)
		{
			printf("buzz");
			pritnf(" ");
		}
		else if (i % 15 == 5)
		{
			printf(buzz);
			printf(" ");
		}
		else
		{
			printf("%d", i);
			printf(" ");
		}
	}
	return (0);
}

