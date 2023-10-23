#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * print_rev- Entry point
 * Description: afficher une chaine de caractère a l'envers
 * @s : chaine de caractère
 */
void print_rev(char *s)
{
int longueur = _strlen(s);
int compteur;
for (compteur = longueur - 1 ; compteur >= 0 ; compteur--)
{
_putchar(s[compteur]);
}
_putchar('\n');
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
/**
* {
*	int compteur = 0;
*       int compteur2;
*	for (compteur = 0 ; *s != '\0' ; compteur++)
*	{
*		s++;
*	}
*
*	for (compteur2 = compteur - 1 ; compteur2 >= 0 ; compteur2--)
*	{
*		putchar(*s);
*		s--;
*	}
* putchar('\n');
* }
*/
