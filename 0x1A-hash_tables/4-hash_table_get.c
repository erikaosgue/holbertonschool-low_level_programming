#include "hash_tables.h"
#include <string.h>

/**
 * hash_table_get - retrieves a value associated with a key.
 * @ht: Pointer to the hash table
 * @key: Pointer to the string key
 * Return: The value associated with the key, 0 otherwise
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = 0;
	hash_node_t *head = NULL;

	index = key_index((unsigned char *)key, ht->size);
	head = ht->array[index];
	while (head)
	{
		if (strcmp(head->key, key) == 0)
			return (head->value);
		if (head->next != NULL)
			head = head->next;

	}
	return (NULL);



}
