#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - creating neww dog
 * @name:  dogs name
 * @age: age dogs
 * @owner: onwer
 *
 * Return: dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int i, j, k;
	dog_t *dog;

	if (name == NULL || owner == NULL)
		return (NULL);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	for (i = 0; name[i]; i++)
		;
	i++;
	dog->name = malloc(i * sizeof(char));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (k = 0; k < i; k++)
		dog->name[k] = name[k];
	dog->age = age;
	for (j = 0; ownder[j]; j++)
		;
	j++;
	dog->owner = malloc(j * sizeof(char));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (k = 0; k < j; k++)
		dog->owner[k] = owner[k];
	return (dog);
}
