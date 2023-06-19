#include "dog.h"
#include <stdlib.h>
/**
* free_dog - Free elementsof a dog
* @d: Dog struct address
*/
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}
