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

	int c, i, j, len;

	i = 0;

	while (s[i] != '\0')
	{
		i++;

	}

	j = 0;
	len = i;
	i--;
	while (j < len / 2)
	{
		c = s[i];
		s[i] = s[j];
		s[j] = c;

		i--;
		j++;
	}
}

