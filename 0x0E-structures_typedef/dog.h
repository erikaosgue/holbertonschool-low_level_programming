#ifndef DOG_H
#define DOG_H
/**
 * struct dog - struct dog
 * @name: name of dog
 * @age: age of dog
 * @owner: address of the owner string
 *
 * Description: Longer description
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif
