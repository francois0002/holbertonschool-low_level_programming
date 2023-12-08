#include "hash_tables.h"

/**
* hash_table_print - prints a hash table
* @ht: hastable to print
*/
void hash_table_print(const hash_table_t *ht)
{

	unsigned long int index;

	if (ht == NULL)
		return;

	printf("{");
	for (index = 0; index < ht->size; index++)

	{
		hash_node_t *current = ht->array[index];

		while (current != NULL)
		{
			printf("'%s': '%s'", current->key, current->value);
			if (current->next != NULL)
				printf(", ");
			current = current->next;
		}
	}
	printf("}\n");
}
