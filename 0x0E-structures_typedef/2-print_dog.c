#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - prints struct members to stdout
 * @d: pointer to struct
 */
void print_dog(struct dog *d)
{
	/*keying in requirements*/
	if (d == NULL)
		exit(0);/*exits the function without printing anything*/
	if (d->name == NULL)
		d->name = "(nil)";/*sets the value of name if cond. is true*/
	if (d->owner == NULL)
		d->owner = "(nil)";
	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
