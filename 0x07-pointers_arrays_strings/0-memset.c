#include "main.h"
/**
 * _memset - fill memory with constant data
 * @s: memory pointer
 * @n: number of bytes to be filled
 * @b: constant byte to be filled with
 *
 * Return: s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(s + i) = b;
		i++;
	}

	return (s);
}
