#include <string.h>
#include "lists.h"

/**
 * _strlen - Return the lenght of a string
 * @str: the address of the string
 * Return: A int, which is the lenght of str
 */

int _strlen(const char *str)
{
	int i;

	for (i = 0; str[i] != 0; i++)
	{
	}
	return (i);
}
/**
 * add_node_end -adds a new node at the end of a list_t list.
 * @head: Double pointer poiting to the address of the the head NODE
 * @str: address of the string to add in the new node
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	int len = 0;

	len = _strlen(str);

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		list_t *curr = *head;

		while (curr->next != NULL)
			curr = curr->next;
		curr->next = new;
	}
	return (new);

}
