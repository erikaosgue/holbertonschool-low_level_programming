#include "hash_tables.h"


/**
 * shash_table_create - creates a hash table
 * @size: is the size of the array
 * Return: a pointer to the newly created hash table, Null otherwise
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *new_table = NULL;
	shash_node_t **array_ptr = NULL;
	unsigned long int i;

	new_table = malloc(sizeof(shash_table_t));
	if (new_table == NULL)
		return (NULL);

	array_ptr = malloc(sizeof(shash_node_t *) * size);
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
	new_table->shead = NULL;
	new_table->stail = NULL;
	return (new_table);
}

/**
 * shash_table_set - adds an element to the hash table.
 * @ht: Pointer to the hash table
 * @key: Pointer to the string key
 * @value: Pointer to the value to be saved
 * Return:1 on success, 0 otherwise
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *result = NULL;
	unsigned long int index = 0;


	if (ht == NULL || key == NULL)
		return (0);
	if (strcmp(key, "") == 0)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	result = add_node_hash(&ht->array[index], key, value, ht);
	if (result == NULL)
		return (0);
	return (1);
}

/**
 * add_node_hash - adds a new node at the beginning of a list_t list
 * @head: Addres of the head of which first is NULL
 * @key: Address of the string that the function recieves
 * @value: Addres of the string value to be save in the node
 * @ht: Pointer to the hash table
 * Return: The addres of the new element, or NULL if it failed
 */

shash_node_t *add_node_hash(shash_node_t **head, const char *key,
const char *value, shash_table_t *ht)
{
	shash_node_t *new = NULL, *temp = NULL;

	temp = *head;
	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
		{
			free(temp->value);
			temp->value = strdup(value);
			return (temp);
		}
		temp = temp->next;
	}
	new = malloc(sizeof(shash_node_t));
	if (new == NULL)
		return (NULL);
	new->key = strdup(key);
	new->value = strdup(value);
	new->next = *head;
	*head = new;
	sorted_hash_table(new, ht);
	return (new);
}

/**
 * sorted_hash_table - Add a ned node sorted by the number
 * @new: Points to the new
 * @ht: Pointer to the hash table
 * Return: the address of the New node, NULL otherwise
 */
shash_node_t *sorted_hash_table(shash_node_t *new, shash_table_t *ht)
{
	shash_node_t *previous, *current, *head;

	head = ht->shead;
	previous = ht->shead;
	current = ht->shead;

	if (head == NULL)
	{
		ht->shead = new, new->sprev = NULL;
		new->snext = NULL, ht->stail = new;
		return (new);
	}
	if (strcmp(head->key, new->key) > 0)
	{
		new->snext = head, new->sprev = NULL;
		head->sprev = new, ht->shead = new;
		return (new);
	}
	while (current)
	{
		if (strcmp(current->key, new->key) > 0)
		{
			new->snext = current, new->sprev = previous;
			previous->snext = new, current->sprev = new;
			return (new);
		}
		else if (current->snext == NULL)
		{
			new->sprev = current, new->snext = NULL;
			current->snext = new, ht->stail = new;
			return (new);
		}
		previous = current;
		current = current->snext;
	}
	return (NULL);
}
/**
 * shash_table_get - retrieves a value associated with a key.
 * @ht: Pointer to the hash table
 * @key: Pointer to the string key
 * Return: The value associated with the key, 0 otherwise
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index = 0;
	shash_node_t *head = NULL;


	if (ht == NULL || key == NULL)
		return (0);
	if (strcmp(key, "") == 0 || key == '\0')
		return (0);

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
/**
 * shash_table_print - Print a hash table
 * @ht: pointer to the hast table
 * Return: Nothing
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *head = NULL;

	head = ht->shead;

	if (head == NULL)
		return;

	printf("{");
	while (head)
	{
		printf("'%s': '%s'", head->key, head->value);
		if (head->snext != NULL)
			printf(", ");
		head = head->snext;
	}
	printf("}\n");
}
/**
 * shash_table_print_rev - Prints all the elements of a dlistint_t list.
 * @ht: pointer to the hast table
 * Return: Nothing
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *tail = NULL;

	tail = ht->stail;

	if (tail == NULL)
		return;

	printf("{");
	while (tail)
	{
		printf("'%s': '%s'", tail->key, tail->value);
		if (tail->sprev != NULL)
			printf(", ");
		tail = tail->sprev;
	}
	printf("}\n");
}

/**
 * shash_table_delete -  deletes the hash table
 * @ht: pointer to the hast table
 * Return: Nothing
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *head = NULL, *temp;

	head = ht->shead;

	while (head)
	{
		temp = head;
		head = head->snext;
		free(temp->key);
		free(temp->value);
		free(temp);
	}
	free(ht->array);
	free(ht);
}
