#include <stdlib.h>
#include "dog.h"
/**
 * free_dog-to free the memory allocated of the struct
 * @d:frees the struct dog
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}

