#include "main.h"

/**
 * _strlen - function returns length of string
 *
 * @s: string whose length is to be returned
 *
 * return: always 0
 */

int _strlen(char *s)
{
	int n;

	for (n = 0; *s != '\0'; s++)
		n++;
	return n;
}