#include "lists.h"

/**
* free_list- free memory for a list
* @head: first punter
*/

void free_list(list_t *head)
{

	list_t *ptr_node = head;
	list_t *next_node;

	while (ptr_node != NULL)
	{
		next_node = ptr_node->next;
		free(ptr_node->str);
		free(ptr_node);
		ptr_node = next_node;
	}
}
