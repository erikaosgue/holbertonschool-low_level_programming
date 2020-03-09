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
	if (d != 0)
		printf("Name: %s\nAge: %f\nOwner: %s\n", d->name ? d->name : "(nil)",
				d->age, d->owner ? d->owner : "(nil)");
}
