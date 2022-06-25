#include "main.h"
/**
 * _memcpy - copy bytes memory from src to dest
 * @src: memory area to copy from
 * @dest: memory to be copied to
 * @n: bytes to be filled with
 *
 * Return: dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}

	return (dest);
}
