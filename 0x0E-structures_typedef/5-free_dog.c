#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - frees all malloc spaces after use
 * @d: struct pointer which used the malloc space
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		/*free the malloc created in ascending order*/
		free(d->owner);
		free(d->name);
		free(d);
	}
}
