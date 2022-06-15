#include "main.h"
#include "stdio.h"
/**
 * print_array - print n element of a number of arrays
 *
 * @a: first number
 * @n: second number
 * Description: print n element
 * return: always 0
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", *(a + 1));
		if (i < n - 1)
			printf(", ");
	}
	printf("\n");
}
