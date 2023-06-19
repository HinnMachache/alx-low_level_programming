#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - Initiliazes varibles of a struct
 * @d: Address of dog struct
 * @name: Name of dog struct
 * @age: Age of dog struct
 * @owner: Dog owner
 */
void init_dog(struct dog *d, char *name, float age, char owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
