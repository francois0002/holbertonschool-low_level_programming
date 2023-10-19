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
	int compteur = -1;

		while (compteur < 14)
		{
		compteur++;
		if (compteur > 9)
		{
		_putchar(compteur / 10 + '0');
		}
		_putchar(compteur % 10 + '0');
	}
	_putchar('\n');
}

