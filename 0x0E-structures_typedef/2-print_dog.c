#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * print_dog - Print the name, age, and owner of the Dog
 * @d: Address of the struct dog
 * Return: nothing
 */
void print_dog(struct dog *d)
{
	if (d == 0)
		return;
	if (d->name == 0)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);
	if (d->age == 0)
		printf("Name: (nil)\n");
	else
		printf("Age: %f\n", d->age);
	if (d->owner == 0)
		printf("Name: (nil)\n");
	else
		printf("Owner: %s\n", d->owner);

}
