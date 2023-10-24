#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * puts_half - Entry point
 * Description: afficher la moitié de la chaine
 * @str : chaine de caractère
 */
void puts_half(char *str)
{
	int longueur = _strlen(str);
	int compteur;
	int longueur_finale = longueur;

	if (longueur_finale % 2 == 0)
	{
		for (compteur = (longueur_finale / 2) ; compteur < longueur_finale ; compteur++)
		{
			_putchar(str[compteur]);
		}
	_putchar('\n');
	}
	else
	{
		for (compteur = (longueur_finale / 2) + 1 ; compteur < longueur_finale ; compteur++)
		{
			_putchar(str[compteur]);
		}
	_putchar('\n');
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
