#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocate memory for an array
 * @nmemb: elements of array
 * @size: size of memory
 *
 * Return: return pointer to the allocated memmory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i;
	char *mem;

	if (nmemb == 0 || size == 0)
		return (NULL);
	mem = malloc(nmemb * size);
	if (mem == NULL)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
		mem[i] = 0;
	return (mem);
}
