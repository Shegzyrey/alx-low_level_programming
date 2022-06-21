#include "main.h"
#include <stdio.h>
/**
 * _strspn - returns characters that are not in the order
 * @s: strings to run through
 * @accept: modulo string
 *
 * Return: the characters left.
 */

unsigned int _strspn(char *s, char accept)
{
	unsigned int i, j, res;

	for (i = 0; s[i] != '\0'; i++)
	{
		res = 1;
		for (j = 0; accpept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				res = 0;
				break
			}

		}
		if (res == 1)
			break;
	}
	return (i)
}
