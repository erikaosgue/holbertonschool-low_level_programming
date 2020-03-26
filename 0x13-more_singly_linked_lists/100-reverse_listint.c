#include "lists.h"
/**
 * reverse_listint - reverses a listint_t linked list.
 * @head: its a pointer to the pointer head from main function
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev;
	listint_t *curr;

	if (head == NULL || *head == NULL)
		return (NULL);
	if ((*head)->next == NULL)
		return (*head);
	prev = *head;
	curr = (*head)->next;
	prev->next = NULL;

	while (*head != NULL)
	{
		*head = curr->next;
		curr->next = prev;
		prev = curr;
		curr = *head;
	}
	(*head) = prev;
	return (*head);
}
