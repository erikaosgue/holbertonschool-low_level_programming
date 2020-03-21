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
 * add_node - adds a new node at the beginning of a list_t list
 * @head: Addres of the head of which first is NULL
 * @str: Address of the string that the function recieves
 * Return: The addres of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	/*
	 * head is a double pointer, it's value is the
	 * address of the head in the main
	 */
	size_t len;
	list_t *new;

	len = _strlen(str);

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		printf("Error\n");
		return (NULL);
	}
	new->str = strdup(str);
	new->len = len;
	new->next = *head;
	*head = new;
	return (new);
}

