#ifndef DOG_H
#define DOG_H

/**
 * struct dog - describing a dog
 * @name: dogs name
 * @age: dogs age
 * @owner: dog owners name.
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t ;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
