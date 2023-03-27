#include "hash_tables.h"

/**
 * key_index - returns the index of a key.
 * @key: key
 * @size: hash table
 * Return: index of key
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	if (!key || size <= 0)
		return (0);
	return (hash_djb2(key) % size);
}
