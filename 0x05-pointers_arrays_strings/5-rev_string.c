#include "main.h"

/**
 * rev_string - reverses a string
 *
 * @s: character used in reverse
 *
 * return: always 0
 */

void rev_string(char *s)
{

	int c, i, j;

	for (i = 0, j = strlen(s) - 1; i < j; i++, j--)
	{
		c = s[i];
		s[i] = s[j];
		s[j] = c;
	}
}

