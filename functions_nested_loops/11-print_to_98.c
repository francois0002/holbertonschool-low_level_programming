#include <time.h>
#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
 * print_to_98- Entry point
 * Description: affiche les valeurs de n à 98
 * @n: nombre initial
 * Return: liste des nombre jusqu'à 98
 */
int print_to_98(int n)
{
int compteur;

	if (n < 98)
	{
		for (compteur = n ; compteur < 98 ; compteur++)
		printf("%d, ", compteur);
		printf("98");
		printf("\n");
	}
	if (n == 98)
	{
		printf("98");
		printf("\n");
	}
	if (n > 98)
	{
		for (compteur = n ; compteur > 98 ; compteur--)
		printf("%d, ", compteur);
		printf("98");
		printf("\n");
	}
return (0);
}
