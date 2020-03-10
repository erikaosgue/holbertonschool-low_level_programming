#include "dog.h"
#include <stdlib.h>
/**
 * _strdup - Return a function to a newly allocated space
 * @str: address of the new string
 * Return: address of the string
 */
char *_strdup(char *str)
{
	unsigned int i;
	char *s;
	unsigned int size = 0;

	if (str == 0)
		return (0);
	for (i = 0; str[i] != 0; i++)
	{
		size += 1;
	}
	s = malloc(sizeof(char) * (size + 1));
	if (s == 0)
		return (0);
	for (i = 0; i < size; i++)
	{
		s[i] = str[i];
	}
	s[i] = 0;
	return (s);
}
/**
 * new_dog - creates a new dog
 * @name: addres of the name of the dog
 * @age: age of the dog
 * @owner: name of the owner
 * Return: Address of the new struc dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog = malloc(sizeof(dog_t));
	if (dog == 0)
		return (0);
	dog->name = _strdup(name);
	if (dog->name == 0)
	{
		free(dog);
		return (0);
	}
	dog->age = age;
	dog->owner = _strdup(owner);
	if (dog->owner == 0)
	{
		free(dog);
		return (0);
	}
	return (dog);
}
