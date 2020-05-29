#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: is the size of the array
 * Return: a pointer to the newly created hash table, Null otherwise
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table = NULL;
	hash_node_t **array_ptr = NULL;
	unsigned long int i;

	new_table = malloc(sizeof(hash_table_t));
	if (new_table == NULL)
		return (NULL);

	array_ptr = malloc(sizeof(hash_node_t *) * size);
	if (array_ptr == NULL)
	{
		free(new_table);
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		array_ptr[i] = NULL;
	}
	new_table->array = array_ptr;
	new_table->size = size;
	return (new_table);
}
