#include <stdio.h>

/**
 * main -function entry point
 * Description: fibonacci sequence
 * Return: 0
 */
int main(void)
{
	int fib_count;
	unsigned long fi1 = 0, fi2 = 1, sum;

	while (fib_count < 50)
	{
		sum = fi1 + fi2;
		fi1 = fi2;
		fi2 = sum;
		printf("%lu", sum);

		if (fib_count == 49)
		{
			printf("\n");
		}
		else
		{
			printf(", ");
		}
		fib_count++;
	}
	return (0);
}
