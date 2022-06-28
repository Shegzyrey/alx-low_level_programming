#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a copy of string
 * @str: srting to be duplicated
 *
 * Return: null or array
 */

char *_strdup(char *str)
{
	int i;
	char *cstr;
	int n = 0;


	for (n = 0; str[n]; n++)
		;
	n++;
	cstr = (char *) malloc(n * sizeof(char));
	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < n; i++)
	{
		if (cstr != NULL)
		{
			cstr[i] = str[i];
		}
		else
			return (NULL);
		return (cstr);
	}
}
