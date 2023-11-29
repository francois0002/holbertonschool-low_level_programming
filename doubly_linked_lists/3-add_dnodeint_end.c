#include "lists.h"

/**
* add_dnodeint_end- add a new node at the end of a double list
* @head: first punter
* @n: number in the list
* Return: the adresse of the new element
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *ptr_node;
	dlistint_t *tmp_node;

	ptr_node = *head;

	tmp_node = malloc(sizeof(dlistint_t));
	if (tmp_node == NULL)
	{
		return (NULL);
	}
	/* set up the new_node */
	tmp_node->prev = NULL;
	tmp_node->n = n;
	tmp_node->next = NULL;
	/* if Head is null, new node go on the head of the list */
	if (*head == NULL)
	{
		*head = tmp_node;
		return (tmp_node);
	}
	else
	{
		/* browse the list */
		while (ptr_node->next != NULL)
		{
			ptr_node = ptr_node->next;
		}
		/* add the new node at the end of the list */
		ptr_node->next = tmp_node;
		tmp_node->prev = ptr_node;
		return (tmp_node);
	}
}
