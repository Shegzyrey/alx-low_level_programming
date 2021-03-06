#include <stdio.h>
#include "dog.h"

/**
 * init_dog - initializing a variable of type struct dog
 *
 * @d: name of variable
 * @name: dog name
 * @age: dog age
 * @owner: dogs owner
 *
 * Return: 0
 */

void init_dog(struct dog *d, char  *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
