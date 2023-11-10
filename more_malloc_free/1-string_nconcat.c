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
int compteur2;

fusion = malloc((sizeof(char) * _strlen(s1) + sizeof(char) * _strlen(s2)) - n);
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