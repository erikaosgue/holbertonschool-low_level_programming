#include "lists.h"

/**
 * free_listint - frees a listint_t list.
 * @head: The address of the head pointer
 * Return: Nothing
 */
void free_listint(listint_t *head)
{
	listint_t *t;
	int i;

	for (i = 0; head != NULL; i++)
	{
		t = head;
		head = head->next;
		free(t);
	}
}
