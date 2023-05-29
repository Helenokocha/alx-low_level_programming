#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * Print_dog - Prints a structure dog
 * @d: structure dog to print
 */

void print_dog(const struct dog *d)
{
	if (d == NULL)
		return;


	if (d->name == NULL)
		d->name = "(nil)";
	if (d->owner == NULL)
		d->owner = "(nil)";

	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
