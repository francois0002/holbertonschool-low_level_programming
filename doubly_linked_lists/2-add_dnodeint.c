#include "lists.h"

/**
* add_dnodeint- a new node at the beginning of a double list
* @head: first punter
* @n : number
* Return: the adresse of the new element
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{

	dlistint_t *tmp_node;

	tmp_node = malloc(sizeof(dlistint_t));
	if (tmp_node == NULL)
	{
		return (NULL);
	}
	tmp_node->prev = NULL;
	tmp_node->n = n;
	tmp_node->next = NULL;
	tmp_node->next = *head;
	if (*head != NULL)
	{
		(*head)->prev = tmp_node;
	}
	*head = tmp_node;

	return (*head);
}
