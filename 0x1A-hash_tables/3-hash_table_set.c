#include "hash_tables.h"
#include <string.h>

/**
 * hash_table_set - adds an element to the hash table.
 * @ht: Pointer to the hash table
 * @key: Pointer to the string key
 * @value: Pointer to the value to be saved
 * Return:1 on success, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *result = NULL;
	unsigned long int index = 0;

	if (strcmp(key, "") == 0 || key == '\0')
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	/*  [*(&(ht->array+index)) = ht->array+index = &(ht->array[index]) ]*/
	result = add_node(&ht->array[index], key, value);
	if (result == NULL)
		return (0);
	return (1);
}

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: Addres of the head of which first is NULL
 * @key: Address of the string that the function recieves
 * @value: Addres of the string value to be save in the node
 * Return: The addres of the new element, or NULL if it failed
 */

hash_node_t *add_node(hash_node_t **head, const char *key, const char *value)
{
	hash_node_t *new = NULL, *temp = NULL;
	int change_value = 0;

	if (*head == NULL)
	{
		new = malloc(sizeof(hash_node_t));
		if (new == NULL)
			return (NULL);

		new->key = strdup(key);
		new->value = strdup(value);
		new->next = *head;
		*head = new;
		return (new);
	}
	temp = *head;
	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
		{
			free(temp->value);
			temp->value = strdup(value);
			change_value = 1;
			return (temp);
		}
		temp = temp->next;
	}
	if (change_value != 1 && temp == NULL)
	{
		new = malloc(sizeof(hash_node_t));
		if (new == NULL)
			return (NULL);

		new->key = strdup(key);
		new->value = strdup(value);
		new->next = *head;
		*head = new;
	}
	return (new);
}
