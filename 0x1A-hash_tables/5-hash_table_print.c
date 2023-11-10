#include "hash_tables.h"

/**
* hash_table_print - prints a hash table.
* @ht: the hash table
*
* Return: Nothing
*/

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	int flag = 0;
	/* check if table is null or table array is null */
	/* loop through the table */
	if (!ht)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{	/* skip any index that is pointing to NULL */

		/* loop through the index pointing to a list */
		if (ht->array[i])
		{
			if (flag == 1)
				printf(", ");
			while (ht->array[i])
			{
				printf("'%s': '%s'", ht->array[i]->key, ht->array[i]->value);
				/* if the next value is true print , */
				ht->array[i] = ht->array[i]->next;
				if (ht->array[i])
					printf(", ");
			}
			flag = 1;
		}
	}
	printf("}\n");
}
