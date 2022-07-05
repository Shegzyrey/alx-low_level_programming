#ifndef _DOG_H
#define _DOG_H

/**
 * struct dog - describing a dog
 * @name: dogs name
 * @age: dogs age
 * @owner: dog owners name.
 *
 * Description: this structure describes dogs
 */


struct dog
{
	char *name;
	float age;
	char *owner;
};

int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *newdog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
