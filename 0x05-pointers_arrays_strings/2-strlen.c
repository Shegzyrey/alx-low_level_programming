#include "main.h"

/**
 *_strlen - function returns length of string
 *
 * @s: string whose length is to be returned
 * Return: always 0
 */

int _strlen(char *s)
{
	int i = 0;

	while (*(s + i))

		i++;
	return (i);
}
