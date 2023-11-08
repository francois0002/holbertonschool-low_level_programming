#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
* string_nconcat- Entry point
* Description: fusionne 2 string
* @s1 : première string
* @s2 : deuxième string
* @n : nombre de bloc sur la deuxieme strint
* Return: pointeur qui contient une adresse mémoire
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int compteur;
	char *new_s2;
	char *fusion;
	unsigned int comparatif_de_n = _strlen(s2);
	/**
	 * si s1 ou s2 est null on les passe en chaine vide
	  */
	if (s2 == NULL)
	{
		s2 = ""
	}
		if (s1 == NULL)
	{
		s1 = "";
	}
	/**
	 * si n est supérieur à la longueur de la string s2 alors n = à s2
	 */
	if (n > comparatif_de_n)
	{
		n = comparatif_de_n;
	}
	new_s2 = malloc(sizeof(char) * n);
	if (new_s2 == NULL)
	{
		return (NULL);
	}
	for (compteur = 0 ; compteur < n ; compteur++)
	{
		new_s2[compteur] = s2[compteur];
	}
	new_s2[compteur + 1] = '\0';
	fusion = str_concat(s1, new_s2);
	free(new_s2);
	return (fusion);
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