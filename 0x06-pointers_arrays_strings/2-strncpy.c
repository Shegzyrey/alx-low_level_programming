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
	for (n = 0; *src != '\0'; n++, dest++, src++)
	{
		*src = *dest;
		*src = '\0';
		
		_putchar(dest);
	}
	_putchar('\n');
}
