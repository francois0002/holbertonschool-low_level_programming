#include "lists.h"

/**
* free_dlistint- free memory for a double list
* @head: first punter
*/

void free_dlistint(dlistint_t *head)

{

	dlistint_t *ptr_node = head;
	dlistint_t *next_node;

	while (ptr_node != NULL)
	{
		next_node = ptr_node->next;
		free(ptr_node);
		ptr_node = next_node;
	}
}
