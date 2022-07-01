#include "main.h"
#include <stdlib.h>

/**
 * array_range - array of values from min - max
 * @min: min value in the array
 * @max: max value in the array
 *
 * Return: pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int i, k;
	int *rang;

	if (min > max)
	{
		return (NULL);
	}

	k =  max - min + 1;

	rang = malloc(sizeof(int) * k);

	if (rang == NULL)
	{
		return (NULL);
	}
	for (i = 0; min <= max; i++)
	{
		rang[i] = min;
		min++;
	}
	return (rang);
}
