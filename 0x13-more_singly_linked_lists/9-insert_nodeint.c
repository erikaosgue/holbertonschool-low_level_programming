#include "lists.h"

/**
 * insert_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: Its a pointer to the address of the head pinter
 * @idx: is the index of the list where the new node should be added.
 * Index starts at 0
 * @n: Its the node data (n -> int)
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *prev;
	listint_t *sigu;
	listint_t *new;
	unsigned int i;

	if (*head == NULL || head == NULL)
		return(NULL);
	prev = (*head);
	sigu = prev->next;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = prev;
		(*head) = new;
		return (*head);
	}
	for (i = 1; i < idx && sigu != NULL; i++)
	{
		prev = sigu;
		sigu = sigu->next;
	}
	if (i == idx)
	{
		new->next = sigu;
		prev->next = new;
	}
	else
	{	free(new);
		return (NULL);
	}
	return (new);
}
