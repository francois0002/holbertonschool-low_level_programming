#include "lists.h"

/**
* delete_dnodeint_at_index- delete a node at a given position
* @head: first punter node
* @index: position of the node, start to 0
* Return: 1 if delete sucess or -1 if fail
*/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *ptr_node;
	unsigned int count;

	ptr_node = *head;
	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		if (ptr_node->next == NULL)
		{
			*head = NULL;
			return (1);
		}
		else
		{
		ptr_node = ptr_node->next;
		ptr_node->prev = NULL;
		*head = ptr_node;
		return (1);
		}
	}
	for (count = 0 ; count < index ; count++)
	{
		if (ptr_node == NULL)
		{
			return (-1);
		}
		else
		{
			ptr_node = ptr_node->next;
		}
	}
	ptr_node->prev->next = ptr_node->next;
	ptr_node->next->prev = ptr_node->prev;
	ptr_node = *head;
	return (1);
}
