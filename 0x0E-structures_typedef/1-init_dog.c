#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initializing members of struct
 * @d: struct created
 * @name: pointer to string
 * @age: float value
 * @owner: pointer to string
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	/*if d is pointing to NULL create space for d*/
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	/*initializing struct*/
	d->name = name;/*we setting the pointer to the string address*/
	d->age = age;
	d->owner = owner;
}
