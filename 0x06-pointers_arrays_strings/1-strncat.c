#include "main.h"

/**
 * _strncat -  function appends the src string to the dest string.
 *
 * @dest:string to be appended to.
 * @src: string to be appended.
 * @n: times of iterations
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	for (i = 0; dest[i] != 0; i++)

	for (j = 0; src[j] != 0 && j < n; j++)
	{
		dest[i] = src[j];
		i++;
	}

	_putchar('\n');

	return (dest);
}
