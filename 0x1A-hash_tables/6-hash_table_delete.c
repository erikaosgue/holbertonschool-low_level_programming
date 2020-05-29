#include "hash_tables.h"

/**
 * hash_table_delete -  deletes the hash table
 * @ht: pointer to the hast table
 * Return: Nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *head = NULL;
	unsigned long int i = 0;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			head = ht->array[i];
			free_list(head);
		}
	}
	free(ht->array);
	free(ht);
}
/**
 * free_list - function that frees a list_t list.
 * @head: its the address of the head node
 * Return: 0 always
 */
void free_list(hash_node_t *head)
{
	hash_node_t *temp;

	while (head != NULL)
	{
		if (head->next != NULL)
		{
			temp = head;
			head = head->next;
			free(temp->key);
			free(temp->value);
			free(temp);
		}
		else
		{
			free(head->key);
			free(head->value);
			free(head);
			return;

		}
	}
}
