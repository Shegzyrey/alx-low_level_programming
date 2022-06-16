#include "main.h"

/**
 * _strcmp -  function compares two string.
 *
 * @s1:string 1
 * @s2: string 2
 *
 * Return: 0 if equal
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int j = 0;

	while (s1[i] != '\0' && j == 0)
	{
		j = s1[i] - s2[i];
		i++;
	}
	return (i);
}
