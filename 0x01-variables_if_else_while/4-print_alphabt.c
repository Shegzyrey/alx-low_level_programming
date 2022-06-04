#include <stdlib.h>

#include <stdio.h>

/**
 *main-entry point for the program.
 *
 *
 *Return: return the list of lowercase alphabet with missing letters.
 *
 *
 */

int main(void)
{
	char eq;

	for (eq = 'a'; eq <= 'z'; eq++)
	{
		if (eq != 'e' && eq != 'q')

			putchar(eq);
	}

	putchar('\n');

	return (0);
}
