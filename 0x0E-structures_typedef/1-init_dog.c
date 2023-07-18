#include <stdlib.h>
#include "dog.h"

/**
 * init_dog-initialization of the varibles
 * @d: to initialize a pointer to the struct
 * @name: to initialize the name
 * @age: to initialize the age
 * @owner:  to initialize the owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
