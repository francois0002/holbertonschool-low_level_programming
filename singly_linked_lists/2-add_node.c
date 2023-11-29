#include "lists.h"

/**
* add_node- add a new node at the beginning of a list
* @head: first punter
* @str: string to put in the node
* Return: the adresse of the new element
*/

list_t *add_node(list_t **head, const char *str)
{

	char *str_duplicate;
	list_t *new_node;

	new_node = malloc(sizeof(list_t));

	str_duplicate = strdup(str);

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->str = str_duplicate;
	new_node->len = _strlen(str_duplicate);
	new_node->next = *head;
	*head = new_node;


	return (new_node);
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
