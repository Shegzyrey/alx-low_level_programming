#include "main.h"
#include <stdlib.h>

/**
 * argstostr - add all arguments
 * @ac: void
 * @av: array
 *
 * Return: return new string or null
 */

char *argstostr(int ac, char **av)
{
	int i, j, k, s = ac;
	char *b;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			ac++;
	}
	b = malloc(sizeof(char) * ac + 1);
	if (b == NULL)
		return (NULL);
	k = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			b[k++] = av[i][j];
		b[k++] = '\n';
	}
	b[ac] = '\0';
	return (b);
}
