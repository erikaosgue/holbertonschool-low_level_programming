#include "hash_tables.h"
#include <string.h>

/**
 * hash_table_print - Print a hash table
 * @ht: pointer to the hast table
 * Return: Nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *head = NULL;
	int not_empty = 0;
	unsigned long int i = 0;


	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			if (not_empty == 0)
				printf("{");
			else
				printf(", ");

			head = ht->array[i];
			print_list(head);
			not_empty = 1;
		}
	}
	if (not_empty == 0)
		printf("{}\n");
	else
		printf("}\n");
}

/**
 * print_list - function that prints all the elements of a list_t list.
 * @h: pointer to the head of the nodes
 * Return: The number of nudes
 */

size_t print_list(const hash_node_t *h)
{
	const hash_node_t *t;
	size_t i;

	t = h;
	for (i = 0; t != NULL; i++)
	{
		if (t->key == NULL)
			printf("[0] (nil)\n");
		else
		{
			printf("'%s': '%s'", t->key, t->value);
			if (t->next != NULL)
				printf(", ");
		}
		if (t->next == NULL)
			break;
		t = t->next;

	}
	return (i);
}

