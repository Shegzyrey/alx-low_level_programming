#include <stdio.h>

/**
 * main - print largest prime factor
 * return: 0
 */

int main(void)
{
	long int n;

	n = 612852475143;

	long int div = 2, ans = 0, maxFact;

	while (n != 1)
	{
		if (n % div == 0)
		{
			while (n % div == 0)
			{
				printf("%ld", div);

				n /= div;
			}
			ans = div;
		}
		div++;
	}
	printf("The largest prime factor is : %ld\n", ans);
	return (0);
}

