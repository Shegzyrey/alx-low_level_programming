#include <stdio.h>
/**
 * main - function entry point
 * Description: print the even numbers in fibonacci <= 4000000
 * Return: 0
 */

int main(void)
{
	int fi1 = 0, fi2 = 1, fisum;
	int sum = 0;

	while (fisum < 4000000)
	{
		fisum = fi1 + fi2;
		fi1 = fi2;
		fi2 = fisum;

		if ((fisum % 2) == 0)
			sum += fisum;
	}
	printf("%i\n", sum);

	return (0);
}
