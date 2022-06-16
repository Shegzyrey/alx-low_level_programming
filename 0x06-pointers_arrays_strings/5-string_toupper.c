#include "main.h"

/**
 * string_toupper -  function change to upper case
 *
 * @s: char type pointer
 * Return: value
 */

char *string_toupper(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 97 && str[i] <= 122)
			s[i] = s[i] - 32;

		i++;
	}
	return (s);
}
