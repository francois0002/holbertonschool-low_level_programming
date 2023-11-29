#include "lists.h"

/**
* add_node_end- add a new node at the end of a list
* @head: first punter
* @str: string to put in the node
* Return: the adresse of the new element
*/

list_t *add_node_end(list_t **head, const char *str)
{

char *str_duplicate;

	list_t *ptr_node;
	list_t *tmp_node;

	str_duplicate = strdup(str);
	ptr_node = *head;

	tmp_node = malloc(sizeof(list_t));
	if (tmp_node == NULL)
	{
		return (NULL);
	}
	/* set up the new_node */
	tmp_node->str = str_duplicate;
	tmp_node->len = _strlen(str_duplicate);
	tmp_node->next = NULL;
	/* if Head is null, new node becode on the head of the list */
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
		return (tmp_node);
	}
}


/**
* _strlen - Entry point
* Description: renvoi la longeur d'une chaine de caractère
* @s : caractère de  la variable
* Return:  longueur
*/
int _strlen(char *s)
{
int longueur;

for (longueur = 0 ; *s != '\0' ; longueur++)
{
	s++;
}
return (longueur);
}
