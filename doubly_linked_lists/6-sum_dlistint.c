#include "lists.h"

/**
* sum_dlistint- calculate the sum of the data n in the list
* @head: first punter
* Return: sum of all n
*/

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *ptr_node;
	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}

	ptr_node = head;

	while (ptr_node->next != NULL)
	{
		if (ptr_node == NULL)
		{
			ptr_node = ptr_node->next;
		}
		else
		{
			sum += ptr_node->n;
			ptr_node = ptr_node->next;
		}
	}
	sum += ptr_node->n;
	return (sum);
}
