#include "main.h"

/**
 * reverse_array  - reverse array content
 *
 * @a:string to be appended to.
 * @n: number of elements of array.
 * Return: always 0.
 */

void reverse_array(int *a, int n)
{
	int i, temp[n];

	for (int i = 0; i < n; i++)
	{
		temp[i] = a[n - i - 1];
	}
	for (i = 0; i < n; i++)
	{
		a[i] = temp[i];
	}
	return (0);
}
