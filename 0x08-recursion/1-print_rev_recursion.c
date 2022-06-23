#include "main.h"
#include <stdio.h>

/**
 * _print_rev_recursion - print the reverse of the string
 * @s: string to be reversed
 *
 * Return: funtion
 */

void _print_rev_recursion(char *s)
{
	unsigned int i = 0;

	if (s[i] == '\0')
	{
		return;
	}

	_print_rev_recursion(s + 1);
	_putchar(s[i]);
}
