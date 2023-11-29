#include "lists.h"

/**
* get_dnodeint_at_index- return the nth of node of a double list
* @head: first punter
* @index: index of the node
* Return: the nth of node
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *ptr_node;
	unsigned int count = 0;


	ptr_node = head;
	for (count = 0 ; count < index ; count++)
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
	return (ptr_node);
}
