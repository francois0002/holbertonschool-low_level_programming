#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * rev_string - Entry point
 * Description: afficher une chaine de caractère
 * @str : chaine de caractère
 * Return:  n
 */
 
 int _strlen(char *s);
 
void rev_string(char *s)
{
int longueur = _strlen(s);
int compteur;
for (compteur = longueur ; compteur <= 0 ; compteur--)
{
putchar(*s);
}
putchar('\n');
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
