#include "main.h"
#include <stdlib.h>


/**
 * create_array - function to create an array
 * @size: size of the array
 * @c: array created
 *
 * Return: null or c
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *b;

	b = (char *) malloc(size * sizeof(char));
	if (size == 0)
	{
		return (NULL);
	}
	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			(*b)[i] = c;
		}
		return (b);
	}
	else
	{
		return (NULL);
	}
}
