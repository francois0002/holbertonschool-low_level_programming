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
	int compteur = 0;
	int compteur2;

	for (compteur = 0 ; *s != '\0' ; compteur++)
	{
		s++;
	}

	for (compteur2 = compteur - 1 ; compteur2 >= 0 ; compteur2--)
	{
		putchar(*s);
		s--;
	}
putchar('\n');
}

