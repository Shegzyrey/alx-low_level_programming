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
	int j;
	char c[] = {44, 59, 46, 33, 63, 34, 40, 41, 123, 125, 32, 10, 9};

	i = 0;

	while (s[i] != '\0')
	{
		if (i == 0 && s[i] >= 97 && s[i] <= 122)
		{
			s[i] = s[i] - 32;
		}
		j = 0;
		while (c[j] != '\0')
		{
			if (c[j] == s[i] && (s[i + 1] >= 97 && s[i + 1] <= 122))
			{
				s[i + 1] = s[i + 1] - 32;
			}
			j++;
		}
		i++;
	}
	return (s);
}
