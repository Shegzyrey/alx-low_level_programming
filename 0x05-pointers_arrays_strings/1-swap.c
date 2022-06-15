#include "main.h"

/**
 * swap_int(int *a, int *b)
 *
 * @a: first variable to be swapped
 * @b: second variable for swap
 *
 * return: always 0
 */

void swap_int(int *a, int *b) /* interchabge *a and *b */
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
