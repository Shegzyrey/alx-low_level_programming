#ifndef DOG_H
#define DOG_H

/**
 * struct dog - describing a dog
 * @name: dogs name
 * @age: dogs age
 * @owner: dog owners name.
 *
 * Description: this structure describes dogs
 */

_putchar (char *c);
typedef struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - renaming struct dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *newdog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
