#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - function that free dogs
 * @d: adrress of the new struct dog
 * Return: 0
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
