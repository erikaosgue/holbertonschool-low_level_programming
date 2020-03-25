#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index index
 * of a listint_t linked list
 * @head: Pointer to the address of the pointer head
 * @index:  is the index of the node to delete
 * Return: the address of the new element, or NULL if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prev;
	listint_t *sig;
	unsigned int i;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		prev = (*head);
		(*head) = (*head)->next;
		free(prev);
		return (1);
	}
	prev = (*head);
	sig = prev->next;
	for (i = 1; i < index && sig != NULL; i++)
	{
		prev = sig;
		sig = sig->next;
	}
	if (i == index)
	{
		prev->next = sig->next;
		free(sig);
	}
	else
		return (-1);
	return (1);
}
