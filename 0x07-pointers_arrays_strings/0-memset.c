#include "main.h"
/**
 * _memset - fill memory with constant data
 * @s: memory pointer
 * @n: number of bytes to be filled
 * @b: constant byte to be filled with
 *
 * Return: s.
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
