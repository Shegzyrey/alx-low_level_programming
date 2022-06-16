#include "main.h"

/**
 * _strcmp -  function compares two string.
 *
 * @s1:string 1
 * @s2: string 2
 * Return: Always 0
 */

char *_strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0')
	{
		if (s1[i] < s2[i])
			return (s1[i] - s2[i]);
		if (s1[i] > s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
