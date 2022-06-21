#include "main.h"
#include <stdio.h>
/**
 * _strchr - retuns the first occurrence of the character in a string
 * @s: strings to run through
 * @c: character reference
 *
 * Return: a pointer to the first character occurence or return null.
 */

char *_strchr(char *s, char c)
{
	for (;;)
	{
		if (c == *s)
		{
			return (s);
		}
		if (*s++  == '\0')
		{
			return (NULL);
		}
	}
}
