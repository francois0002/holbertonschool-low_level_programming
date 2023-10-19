#include <time.h>
#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
 * print_most_numbers- Entry point
 * Description: affiche les nombres de 0 à 9 suivi d'une ligne
 * Return:  nothing
 */
void print_most_numbers(void)
{
	int compteur = 0;

		while (compteur < 9)
		{
		compteur++;
			if (compteur != 2 && compteur != 4)
			{
				_putchar(compteur + '0');
			}
	}
	_putchar('\n');
}

