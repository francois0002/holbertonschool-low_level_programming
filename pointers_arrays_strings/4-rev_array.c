#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * reverse_array- Entry point
 * Description: affiche élement du tableau a l'envers
 * @a : contenu tableau
 * @n : éléments du tableau
 */
void reverse_array(int *a, int n)
{
	int tmp;
	int compteur;

	n--;
	for (compteur = 0;  compteur < n ; compteur++)
	{
		tmp = a[compteur];
		a[compteur] = a[n];
		a[n] = tmp;
		n--;
	}
}

