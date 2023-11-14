#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* int_index -fonction qui recherche depuis un tableau d'entier
* des élments via d'autres fonction
* @array: tableau qui sera pris en compte pour le choix
* @size: fonction a appelé sur la cette fonction, ex uppercase
* @cmp: fonction a appelé sur la cette fonction, 98 ,>0
* Return:index du premier élement trouvé
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	int resultat;

	if (array == NULL || cmp == NULL || size == 0)
	{
		return (-1);
	}
	if (size <= 0)
	{
		return (-1);
	}


	for (i = 0 ; i < size ; i++)
	{
		resultat =  cmp(array[i]);
		if (resultat != 0)
		{
			return (i);
		}
	}
	return (-1);
}
