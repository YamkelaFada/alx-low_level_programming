#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - function that initialize a variable
 * @d: pass value one
 * @name: pass value two
 * @age: pass value three
 * @owner: pass value four
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
