#include <stdio.h>

/**
 * main - functions entry point
 * Description:printing the fibonnaci numbers between 0-98
 * return: this returns 0 after function
 */

int main(void)
{
	int n = 0;

	unsigned long int f1 = 0, f2 = 1, count = 0;

	while (n < 98)
	{
		count = f1 + f2;
		f1 = f2;
		f2 = count;

		printf("%lu", count);

		if (n < 97)
			printf(", ");
		n++;
	}
	printf("\n");

	return (0);
}
