#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
* array_range- Entry point
* Description: créér un tableau d'entier avec un mini et maxi
* @min : valeur mini
* @max : valeur maxi
* Return: pointeur qui contient le tableau
*/

int *array_range(int min, int max)
{

	int *tab = NULL;
	int compteur;

	if (min > max)
	{
		return (NULL);
	}

	tab = malloc(sizeof(int) * (max + 1));
	if (tab == NULL)
	{
		return (NULL);
	}
	for (compteur = min ; compteur <= max ; compteur++)
	{
		tab[compteur] = compteur;
	}
	return (tab);
}
