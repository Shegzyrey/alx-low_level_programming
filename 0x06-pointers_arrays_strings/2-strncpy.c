#include "main.h"

/**
 * _strncpy -  function copies the src string to the dest string.
 *
 * @dest:string to be appended to.
 * @src: string to be appended.
 * @n: variable to work with.
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
