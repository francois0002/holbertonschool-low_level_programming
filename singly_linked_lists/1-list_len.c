#include "lists.h"

/**
* list_len- return the number of element in a linked list
* @h: node
* Return: the number of nodes
*/

size_t list_len(const list_t *h)
{
		size_t index;


	if (h == NULL)
		return (0);

	for (index = 0; h != NULL; index++)
	{

		h = h->next;

	}
		return (index);
}
