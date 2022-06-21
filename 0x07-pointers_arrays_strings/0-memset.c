#include "main.h"
/**
 * _memeset - fill memory with constant data
 * @s: memory pointer
 * @n: number of bytes to be filled
 * @b: constant byte to be filled with
 *
 * return: s
 */

char *_memset(char *s, char b, usigned int n)
{
	unsigned int i;

	while (i < n)
	{
		s[i] = b;
		i++
	}

	return (s);
}
