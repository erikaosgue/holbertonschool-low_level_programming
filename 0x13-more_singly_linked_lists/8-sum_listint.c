#include "lists.h"

/**
 * sum_listint - sum all the data (n) of a listint_t linked list
 * @head: its a pointer that have the address of the head pointer
 * Return: returns the sum of all the data (n) of a listint_t linked list
 */
int sum_listint(listint_t *head)
{
	int sum_of_all_data = 0, i;
	listint_t *t;

	t = head;

	if (head == NULL)
		return (0);

	for (i = 0; t != NULL; i++)
	{
		sum_of_all_data += t->n;
		t = t->next;
	}
	return (sum_of_all_data);
}
