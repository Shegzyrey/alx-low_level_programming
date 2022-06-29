#include "main.h"

/**
 * str_concat - add contents of two strings into one
 * @s1: first string
 * @s2: second string
 *
 * Return: null or new string
 */

char *str_concat(char *s1, char *s2)
{
	int i, j, k, l;
	char *cat;
	int n;

	for (i = 0; s1[i]; i++)
		;
	for (j = 0; s2[i]; j++)
		;
	k = i + j + 1;

	cat = malloc(k * sizeof(char));

	if (cat == NULL)
		return (NULL);
	for (l = 0; l < i; l++)
		s[l] = s1[l];
	for (l = 0; l < j; j++)
		s[l + i] = s2[l];
	s[i + j] = '\0';
	return (s);
}
