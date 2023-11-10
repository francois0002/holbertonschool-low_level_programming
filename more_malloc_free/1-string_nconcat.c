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
char *fusion;
int compteur;
unsigned int compteur2;
unsigned int comparatif_de_n = _strlen(s2);
	/**
	 * si s1 ou s2 est null on les passe en chaine vide
	  */
	if (s2 == NULL)
	{
		s2 = "";
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

	fusion = malloc(sizeof(char) * _strlen(s1) + n + 1);
	if (fusion == NULL)
	{
		return (NULL);
	}

	for (compteur = 0 ; compteur  < _strlen(s1) ; compteur++)
	{
		fusion[compteur] = s1[compteur];
	}
	for (compteur2 = 0 ; compteur2 < n && s2[compteur2] != '\0'; compteur2++)
	{
		fusion[_strlen(s1) + compteur2] = s2[compteur2];
	}

	fusion[_strlen(s1) + n] = '\0';



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


