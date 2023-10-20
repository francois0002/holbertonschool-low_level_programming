#include "main.h"
#include <stdio.h>

/**
 * times_table - Entry point
 * Description: affiche la table de 9
 * Return:  nothing
 */
void times_table(void)
{
	int compteur;
	int compteur_ligne;

	for (compteur = 0 ; compteur < 10 ; compteur++)
	{
		for (compteur_ligne = 0 ; compteur_ligne < 10 ; compteur_ligne++)
		{
			putchar(compteur_ligne + '0');
		}
	}
	putchar('\n');
}
