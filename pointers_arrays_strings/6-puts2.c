#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * puts2 - Entry point
 * Description: afficher un caractère sur 2
 * @str : chaine de caractère
 */
void puts2(char *str)
{
int longueur = _strlen(str);
int compteur;
int longueur_finale = longueur - 1;
for (compteur = 0 ;  compteur < longueur_finale ; compteur = compteur + 2)
{
putchar(str[compteur]);
}
}
/**
 * _strlen - Entry point
 * Description: renvoi la longeur d'une chaine de caractère
 * @s : caractère de  la variable
 * Return:  n
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
