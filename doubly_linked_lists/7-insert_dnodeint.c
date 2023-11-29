#include "lists.h"

/**
* insert_dnodeint_at_index- insert a new node at a given position
* @h: first punter
* @idx: position of the node, start to 0
* @n : data of the node
* Return: adress of the new node
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *ptr_node;
	dlistint_t *new_node;
	unsigned int count;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	if (*h == NULL)
		return (NULL);

	ptr_node = *h;

	if (idx == 0)
		return (add_dnodeint(h, n));

	for (count = 0 ; count < idx - 1 ; count++)
	{
		if (ptr_node == NULL)
		{
			return (NULL);
		}
		else
		{
			ptr_node = ptr_node->next;
		}
	}
	if (ptr_node->next == NULL)
		return (add_dnodeint_end(h, n));

	new_node->n = n;
	new_node->prev = ptr_node;
	new_node->next = ptr_node->next;
	ptr_node->next->prev = new_node;
	ptr_node->next = new_node;

	return (new_node);
}
