#include "lists.h"

/**
 * free_listint2 -  frees a listint_t list; Using Double pointer
 * @head: Its a double pointer, points to the address of the head pointer
 * Return: Nothing
 */
void free_listint2(listint_t **head)
{
	int i;
	listint_t *t;

	for (i = 0; (*head) != NULL; i++)
	{
		t = (*head);
		*head = (*head)->next;
		free(t);
	}
	*head = NULL;
}
