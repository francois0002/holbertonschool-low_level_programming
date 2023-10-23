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
	int compteur;
	int compteur2;

	for (compteur = 0 ; *s != '\0' ; compteur++)
	{
		s++;
	}

	for (compteur2 = compteur ; compteur2 >= 1 ; compteur2--)
	{
		putchar(*s);
		s--;
	}
putchar('\n');
}
