#include <time.h>
#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
 * more_numbers- Entry point
 * Description: afficher 10 fois les nombres de 0 à 14
 * Return:  nothing
 */
void more_numbers(void)
{
	int compteur_nombre = -1;
	int compteur_lignes = 0;

	for (compteur_lignes = 0 ; compteur_lignes < 10 ; compteur_lignes++)
	{
		for (compteur_nombre = 0 ; compteur_nombre < 15 ; compteur_nombre++)
		{
		if (compteur_nombre > 9)
		{
			_putchar(compteur_nombre / 10 + '0');
		}
		_putchar(compteur_nombre % 10 + '0');
		}
		_putchar('\n');
	}
}

