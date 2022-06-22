#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - function prints a string
 * @s: string to be printed
 *
 * Return: s
 */

void _puts_recursion(char *s)
{
	unsigned int i = 0;

	if (s[i] == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(s[i]);
	_puts_recursion(s + 1);
}
