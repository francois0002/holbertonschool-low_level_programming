#include <stdlib.h>
#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * _strcmp - Entry point
 * Description: compare 2 chaine de caractère
 * @s1: chaine 1
 * @s2: chaine 2
 * Return: différence entre les 2 chaines
 */
int _strcmp(char *s1, char *s2)
{
int resultat;
resultat = _strlen(s1) - _strlen(s2);
return (resultat);
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
