#include "lists.h"
/**
 * insert_dnodeint_at_index - A function that inserts a new node
 * at a given position.
 * @h: Points to the header of the list
 * @idx: is the index of the list where the new node should be added.
 * Index starts at 0
 * @n: Integer as value of the new node
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current = NULL, *previous = NULL, *new = NULL;
	unsigned int count = 0;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = new->next = NULL;

	if (*h == NULL && idx == 0)
	{
		*h = new;
		return (new);
	}
	current = previous = *h;
	while (current)
	{
		if (idx == count)
		{
			new->next = current;
			current->prev = new;
			if (idx == 0)
				*h = new;
			else
				new->prev = previous, previous->next = new;
			return (new);
		}
		count += 1, previous = current, current = current->next;
	}
	/* adding a node at the end of list */
	if (current == NULL && idx == count)
	{
		new->prev = previous, previous->next = new;
		return (new);
	}
	free(new);
	return (NULL);
}
