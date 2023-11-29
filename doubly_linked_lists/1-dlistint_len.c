#include "lists.h"

/**
* dlistint_len- print the size of a double list
* @h: first punter
* Return: the number of nodes
*/

size_t dlistint_len(const dlistint_t *h)
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
