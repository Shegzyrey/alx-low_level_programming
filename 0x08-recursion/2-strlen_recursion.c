#include "main.h"

/**
 * _strlen_recursion - find length of a string
 * @s: string to count
 *
 * Return: string length
 */

int _strlen_recursion(char *s)
{
	int i = 0;
	if (s[i] == '\0')
		return (0);
	else
	{
		return(1 + _strlen_recursion(s + 1));
	}
}
