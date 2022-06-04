#include <stdlib.h>
#include <stdio.h>
/**
 *main-entry point for the program.
 *
 *Return: return the list of lower and uppercase alphabets.
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}

	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');

	return (0);
}
