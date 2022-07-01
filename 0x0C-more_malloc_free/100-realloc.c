#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates memmory block
 * @ptr: pointer to old memory address
 * @old_size: size of old memory
 * @new_size:size of new memory
 *
 * Return:a new pointer generated
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *s;

	if (new_size > old_size)
	{
		s = malloc(new_size);
		free(ptr);
		return (s);
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	if (ptr == NULL)
	{
		s = malloc(new_size);
		free(ptr);
		return (s);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	return (ptr);
}
