#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - printing the struct dog
 * @d: the array to work with
 *
 * Return: 0
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
			pritnf("Name: (nil)\n");
		else
			printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		if (d->owner == NULL)
			printf("Owner: (nil)\n");
		else
			printf("Owner: %s\n", d->owner);
	}
	else
		return;
}
