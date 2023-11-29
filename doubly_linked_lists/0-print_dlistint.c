#include "lists.h"

/**
* print_dlistint- print the size of a double list
* @h: first punter
* Return: the number of nodes
*/

size_t print_dlistint(const dlistint_t *h)
{
	size_t index;


	if (h == NULL)
		return (0);

	for (index = 0; h != NULL; index++)
	{

		printf("%d", h->n);
		h = h->next;
		printf("\n");
	}
		return (index);
}
