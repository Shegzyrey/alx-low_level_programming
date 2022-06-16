#include "main.h"

/**
 * reverse_array  - reverse array content
 *
 * @a:string to be appended to.
 * @n: number of elements of array.
 * Return: value.
 */

void reverse_array(int *a, int n)
{
	int i, temp;

	i = 0;

	n--;

	while (i < n)
	{
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
		i++;
		n--;
	}
}
