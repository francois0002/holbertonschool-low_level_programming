#include <time.h>
#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
 * print_diagonal- Entry point
 * Description: affiche une ligne en diagonale dans le terminal
 * @n : nombre qui sera remplacé par un antislash
 * Return:  nothing
 */
void print_diagonal(int n)
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
		for (compteur = 1 ; compteur < n ; compteur++)
		{
			for (compteur_espace = 1 ; compteur_espace < n  ; compteur_espace++)
			{
				if (compteur_espace == compteur)
				{
					_putchar(47);
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

