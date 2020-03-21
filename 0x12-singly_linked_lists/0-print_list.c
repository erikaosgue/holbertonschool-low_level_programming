#include "lists.h"
/**
 * print_list - function that prints all the elements of a list_t list.
 * @h: pointer to the head of the nodes
 * Return: The number of nudes
 */
size_t print_list(const list_t *h)
{
	/*
	 * h = head,
	 * t = temporary pointer
	 */
	const list_t *t;
	size_t i;

	t = h;
	for (i = 0; t != NULL; i++)
	{
		if (t->str == 0)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", t->len, t->str);
		t = t->next;
	}
	return (i);
}
