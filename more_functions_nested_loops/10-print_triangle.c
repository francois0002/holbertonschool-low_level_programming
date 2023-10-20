#include <time.h>
#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
 * print_triangle- Entry point
 * Description: affiche un triangle dans le terminal
 * @size : taille du triangle
 * Return:  nothing
 */
void print_triangle(int size)
{
int compteur;
int compteur_espace;
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
/* déclenche un boucle qui se terminera à la valeur de n) */
		for (compteur = 0 ; compteur < n ; compteur++)
		{
			for (compteur_espace = 0 ; compteur_espace < n  ; compteur_espace++)
			{
				if (compteur_espace == compteur)
				{
					_putchar('#');
				}
				else
				{
					_putchar(32);
				}
			}
			_putchar('\n');
		}
	}

}
