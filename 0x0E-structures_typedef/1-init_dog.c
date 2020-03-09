#include "dog.h"

/**
 * init_dog - Struct that describes name, age, owner of a dog
 * @d: Address of the struct dog
 * @name: address of the string name of Dog
 * @age: age of the dog
 * @owner: Address of the string owner of the Dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == 0)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
