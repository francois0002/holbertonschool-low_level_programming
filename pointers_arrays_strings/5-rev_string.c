#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * rev_string - Entry point
 * Description: afficher une chaine de caractère a l'envers
 * @s : chaine de caractère
 */
void rev_string(char *s)
{
int longueur = _strlen(s);
int compteur_fin_caractere;
int compteur_debut_caractere;
char tmp;
compteur_fin_caractere = longueur - 1;
for (compteur_debut_caractere = 0 ; compteur_debut_caractere
< compteur_fin_caractere / 2 ; compteur_debut_caractere++)
{
tmp = s[compteur_debut_caractere];
s[compteur_debut_caractere] = s[compteur_fin_caractere];
s[compteur_fin_caractere] = tmp;

compteur_fin_caractere--;
}
putchar('\n');
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
