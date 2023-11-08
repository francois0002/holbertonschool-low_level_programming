#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
* _calloc- Entry point
* Description: fusionne 2 string
* @nmemb : première string
* @size : deuxième string
* Return: pointeur qui contient une adresse mémoire
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{

	unsigned int i;
	int *array;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	array = malloc(size * nmemb);
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0 ; i < nmemb ; i++)
	{
		array[i] = 0;
	}

	return (array);

}

/**
* str_concat- Entry point
* Description: fusionne 2 strings
* @s1 : string1
* @s2 : string2
* Return: fusion des 2 strings
*/

char *str_concat(char *s1, char *s2)
{
char *fusion;
int compteur;
int compteur2;

fusion = (char *) malloc(sizeof(char)
* _strlen(s1) + sizeof(char) * _strlen(s2));
if (fusion == NULL)
{
	return (NULL);
}

for (compteur = 0 ; s1[compteur]  != '\0' ; compteur++)
{
	fusion[compteur] = s1[compteur];
}
for (compteur2 = 0 ; s2[compteur2]  != '\0' ; compteur2++)
{
	fusion[compteur + compteur2] = s2[compteur2];
}

fusion[compteur + compteur2 + 1] = '\0';



return (fusion);
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