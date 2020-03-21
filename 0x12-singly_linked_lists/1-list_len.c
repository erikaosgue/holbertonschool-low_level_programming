#include "lists.h"
/**
 * list_len - Returns the number of elements in a linked list_t list.
 * @h: Addres of the head of the nodes
 * Return: The number of nudes
 */
size_t list_len(const list_t *h)
{
	const list_t *t;
	size_t i;

	t = h;

	for (i = 0; t != NULL; i++)
	{
		t = t->next;
	}
	return (i);
}
