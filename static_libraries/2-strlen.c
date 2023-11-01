#include <stdlib.h>
#include <stdio.h>
#include "main.h"
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
