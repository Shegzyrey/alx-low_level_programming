#include "main.h"

/**
 * _strcat -  function appends the src string to the dest string.
 *
 * @dest:string to be appended to.
 * @src: string to be appended.
 * Return: always 0.
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	for (i = 0; dest[i] != '\0'; i++)

	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}

	return (dest);

}
