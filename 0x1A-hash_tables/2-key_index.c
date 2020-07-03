#include "hash_tables.h"

/**
 * key_index - gives you the index of a key.
 * @key: String to be save as a key
 * @size: The size of the table
 * Return: the index of a key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash = 0, index = 0;

	hash = hash_djb2(key);
	index = hash % size;
	return (index);
}
