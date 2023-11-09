#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 *
 * @ht: the hash table
 * @key: the key to find
 *
 * Return: the retrieved value
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;

	/* check if table and key is valid */
	if (!ht || !key || *key == '\0' || ht->array == NULL)
		return (NULL);
	/* get the index of the key */
	index = key_index((const unsigned char *)key, ht->size);
	/* retrieve the value from the array using the index */
	/* while the array is not null, loop through to obtain value */
	while (ht->array[index])
	{
		if (strcmp(ht->array[index]->key, key) == 0)
			return (ht->array[index]->value);
		ht->array[index] = ht->array[index]->next;
	}

	/* return null */
	return (NULL);
}
