#include <time.h>
#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
 * print_numbers- Entry point
 * Description: affiche les nombres de 0 à 9 suivi d'une ligne
 * Return:  nothing
 */
void print_numbers(void)
{
	int compteur;

	for (compteur = 0  ; compteur < 10 ; ++compteur)
	{
	_putchar(compteur + '0');
	}
	_putchar('\n');
}
