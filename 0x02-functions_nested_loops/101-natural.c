#include <stdio.h>
/**
 * main- function entry point
 * Description: getting the 3,5 multiples of 1024
 * Return: 0
 */
int main(void)
{
	int num, sum = 0;

	while (num <= 1024)
	{
		if (num % 3 == 0 || num % 5 == 0)
		{
			sum += num;
		}
		num++;
	}
	printf("%d\n", sum);
	return (0);
}
