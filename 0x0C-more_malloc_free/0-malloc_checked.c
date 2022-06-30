#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocate memmory using malloc
 * @b: memory to be allocated
 *
 * Return: error cocde if not successful
 */

void *malloc_checked(unsigned int b)
{
	int *c;

	c = malloc(sizeof(b));

	if (c == NULL)
		exit(98);
	return (c);
}
