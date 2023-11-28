#include "lists.h"

/**
* print_list- print the size of a list
* @h: node
* Return: the number of nodes
*/

size_t print_list(const list_t *h)
{
	size_t index;


	if (h == NULL)
		return (0);

	for (index = 0; h != NULL; index++)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)");
			printf("\n");
			h = h->next;
		}

		else
		{
			printf("[%d] ", h->len);
			printf("%s", h->str);
			h = h->next;
			printf("\n");
		}
	}
		return (index);
}
