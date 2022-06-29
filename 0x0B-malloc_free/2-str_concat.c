#include "main.h"
#include <stdlib.h>
/**
 * str_concat - add contents of two strings into one
 * @s1: first string
 * @s2: second string
 *
 * Return: null or new string
 */

char *str_concat(char *s1, char *s2)
{
	int i, j, l;
	char *cat;
	int n;

	if (s1 == NULL)
		i = 0;
	else
	{
		for (i = 0; s1[i]; i++)
			;
	}
	if (s2 == NULL)
		j = 0;
	else
	{
		for (j = 0; s2[j]; j++)
			;
	}
	n = i + j + 1;

	cat = malloc(n * sizeof(char));

	if (cat == NULL)
		return (NULL);

	for (l = 0; l < i; l++)
		cat[l] = s1[l];

	for (l = 0; l < j; l++)
		cat[l + i] = s2[l];
	s[i + j] = '\0';
	return (cat);
}
