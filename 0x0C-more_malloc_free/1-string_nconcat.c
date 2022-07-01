#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenate string
 * @s1: first sting
 * @s2: second string
 * @n: size of second sring
 *
 * Return: pointer to the memory of new array
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i;
	int j;
	int k;
	char *s3;

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

	s3 = malloc(sizeof(char) * (i + j + 1));

	if (s3 == NULL)
		return (NULL);
	for (k = 0; k < i; k++)
		s3[k] = s1[i];
	for (k = 0; k < j; k++)
		s3[k + i] = s2[j];
	s3[i + j] = '\0';
	return (s3);
}
