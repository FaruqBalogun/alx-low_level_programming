#include "dog.h"
#include <stdlib.h>

/**
  * free_dog - This frees the dog
  * @d: Dog pointer
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
