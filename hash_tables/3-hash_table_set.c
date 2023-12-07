#include "hash_tables.h"

/**
* hash_table_set - give the index of the key
* @ht: hastable to add or update
* @key: size of the array
* @value: value associated to the key
* Return: index of the key
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = key_index((unsigned char *)key, ht->size);
	hash_node_t *new_node;

	if (key == NULL || value == NULL)
	return (0);


	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);

	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (0);
	}

	new_node->value = strdup(value);
	if (new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node);
	}

	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}
