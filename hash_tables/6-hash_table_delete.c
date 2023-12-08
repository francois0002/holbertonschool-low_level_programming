#include "hash_tables.h"

/**
* hash_table_delete- delete a hash table
* @ht: hastable to print
*/
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int index;

	if (ht == NULL)
		return;

	for (index = 0; index < ht->size; index++)
	{
		hash_node_t *current = ht->array[index];
		hash_node_t *next;

		while (current != NULL)
		{
			next = current->next;
			free(current->key);
			free(current->value);
			free(current);
			current = next;
		}
	}

	free(ht->array);
	free(ht);
}
