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


	cstr = (char *) malloc(n * sizeof(str));
	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < n; i++)
	{
		if (n > 0)
		{
			cstr[i] = str[i];
		}
		else
			return (NULL);
	}
	return (cstr);
}
