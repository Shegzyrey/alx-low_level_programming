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
			printf("\n");
		}
		else if (i % 3 == 0)
		{
			printf("fizz");
			printf(" ");
		}
		else if (i % 5 == 0)
		{
			printf("buzz");
			printf(" ");
		}
		else if (i % 15 == 0)
		{
			printf("fizzbuzz");
			printf(" ");
		else
		{
			printf("%d", i);
			printf(" ");
		}
	}
	return (0);
}

