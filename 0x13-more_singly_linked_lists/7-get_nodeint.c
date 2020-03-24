#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: its a double pointer that points to the address of the head
 * @index: is the index of the node, starting at 0
 * Return: the nth node of a listint_t linked list, NULL if node doesn't exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *lastnode;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	for (i = 0; i < index ; i++)
	{
		if (head->next == NULL)
			return (NULL);
		head = head->next;
	}
	lastnode = head;
	return (lastnode);
}
