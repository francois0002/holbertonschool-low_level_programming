#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * print_array - Entry point
 * Description: afficher les entiers d'un tableau
 * @a : pointeur tableau
 * @n : les entiers
 */
void print_array(int *a, int n)
{
	int compteur;

	if (n >= 0)
	{
		for (compteur = 0 ; compteur < (n - 1) ; compteur++)
		{
			printf("%d, ", a[compteur]);
		}
	printf("%d\n", a[n - 1]);
	}
}
