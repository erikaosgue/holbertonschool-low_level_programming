#include "lists.h"

/**
 * print_listint - function that prints all the elements of a listint_t list.
 * @h: Address of the head pointer head
 * Return: the number of nodes there are in the list
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *t;
	int i;

	t = h;
	for (i = 0; t != NULL; i++)
	{
		printf("%i\n", t->n);
		t = t->next;
	}
	return (i);
}
