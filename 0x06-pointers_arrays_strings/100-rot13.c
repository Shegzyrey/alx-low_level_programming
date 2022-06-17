#include "main.h"

/**
 * rot13 -  function that encodes.
 *
 * @s: string to encode.
 * Return: encoded string
 */

char *rot13(char *s)
{
	int i;
	int j;

	char in[] = "ABCDEFIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char out[] = "NOPQRSTUVWXYZABCDEFGHIJKLopqrstuvwxyzabcdefghijklm";

	i = 0;

	while (s[i] != '\0')
	{
		j = 0;
		while (in[j] != '\0')
		{
			if (s[i] == in[j])
			{
				s[i] = out[j];
				break;
			}
			j++;
		}
		i++;
	}
	return (s);
}
