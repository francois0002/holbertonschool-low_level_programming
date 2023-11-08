#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
* alloc_grid- Entry point
* Description: retourne un tableau à 2 dimensions
* @width : ligne
* @height : hauteur
* Return: taleau
*/

int **alloc_grid(int width, int height)
{
	int compteur;
	int compteur2;
	int **tab;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	tab = malloc(height * sizeof(int *));
	if (tab == NULL)
	{
		return (NULL);
	}
	for (compteur = 0 ; compteur < height ; compteur++)
	{
		tab[compteur] = malloc(width * sizeof(int));
		if (tab[compteur] == NULL)
		{
			for (compteur = 0 ; compteur < width ; compteur++)
			{
				free(tab[compteur]);
			}
		free(tab);
		return (NULL);
		}
	}
	for (compteur = 0 ; compteur < height ; compteur++)
	{
		for (compteur2 = 0 ; compteur2 < width ; compteur2++)
		{
			tab[compteur][compteur2] = 0;
		}
	}
	return (tab);
}
