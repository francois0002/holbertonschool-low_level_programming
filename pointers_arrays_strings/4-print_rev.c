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
for (compteur = longueur ; compteur >= 0 ; compteur--)
{
_putchar(s[compteur]);
}
_putchar('\n');
}

int _strlen(char *s)
{
int longueur;
for (longueur = 0 ; *s != '\0' ; longueur++)
{
	s++;
}
return (longueur);
}

