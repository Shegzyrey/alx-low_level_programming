#include "main.h"
/**
 * _strcpy - copying strings
 *
 * @dest: argument 1
 * @src: argument 2
 *
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*(src + i))
	{
		*(dest + i) = *(src + i);
		i++;
	}

	*(dest + i) = '\0';

	return (dest);
}
