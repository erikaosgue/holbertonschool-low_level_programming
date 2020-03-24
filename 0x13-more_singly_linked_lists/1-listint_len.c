#include "lists.h"

/**
 * listint_len - function that prints all the elements of a listint_t list.
 * @h: Address of the head pointer
 * Return: the number of nodes there are in the list
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *t;
	size_t i;

	t = h;

	for (i = 0; t != NULL; i++)
	{
		t = t->next;
	}
	return (i);

}
