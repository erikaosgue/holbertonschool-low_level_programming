#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: Its a double pointer to the addres of the head pointer
 * Return: the head node’s data (n -> int).
 */
int pop_listint(listint_t **head)
{
	listint_t *t;
	int value_of_head = 0;

	if (*head == NULL)
		return (0);
	t = (*head);
	value_of_head = (*head)->n;
	(*head) = (*head)->next;
	free(t);
	return (value_of_head);

}
