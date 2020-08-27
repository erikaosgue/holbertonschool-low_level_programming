#include "search_algos.h"

/**
 * jump_list -searches for a value in a sorted list of integers using the Jump
 * search algorithm.
 * @list: is a pointer to the head of the list to search in
 * @size: is the number of nodes in list
 * @value: is the value to search for
 * Return: NULL If value is not present in head or if head is NULL,
 * otherwise return a pointer to the first node where value is located
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t step = 0, flag = 0;
	listint_t *head = NULL, *before = NULL;
	size_t i = 0;

	if (!list || size == 0)
		return (NULL);

	step = sqrt(size);
	head = list;

	if (list->n > value)
		return (NULL);

	while (head->n <= value && !flag)
	{
		before = head;
		for (i = 0; i < step; i++)
			if (head->next)
				head = head->next;
			else
				flag = 1;
		printf("Value checked at index[%ld] = [%d]\n", head->index, head->n);
	}
	printf("Value found between indexes [%ld] and [%ld]\n",
	before->index, head->index);

	while (before != head->next)
	{
		printf("Value checked at index[%ld] = [%d]\n", before->index, before->n);
		if (before->n > value)
			break;
		if (before->n == value)
			return (before);
		before = before->next;
	}
	return (NULL);
}
