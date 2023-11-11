#include "hash_tables.h"

/**
 * key_index - the index of key
 * @key: key
 * @size: size of the array of the hash table
 *
 * Return: the index at which the key/value pair
 * should be stored in the array of the hash table
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value;
	if (!key || !size)
		return (-1);
	hash_value = hash_djb2(key);

	return (hash_value % size);
}
