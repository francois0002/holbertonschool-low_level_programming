#include <time.h>
#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
 * print_square- Entry point
 * Description: affiche un carré par le terminal
 * @size : nombre qui défini la taille du carré
 * Return:  nothing
 */
void print_square(int size)
{
int compteur;
int compteur_sharp;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (compteur = 0 ; compteur < size ; compteur++)
		{
			for (compteur_sharp = 0 ; compteur_sharp < size ; compteur_sharp++)
			{
				_putchar('#');
			}
		_putchar('\n');
		}
	}
}
