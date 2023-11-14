#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* array_iterator -fonction qui execute 2 autres fonctions
*(hexa et décimal) selon un tableau et son nombre d'éléments
* @array: tableau qui sera pris en compte pour le choix
* @size: fonction a appelé sur la cette fonction, ex uppercase
* @action: fonction a appelé sur la cette fonction, ex uppercase
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
	{
		return;
	}
	if (size == 0)
	{
		return;
	}

	for (i = 0 ; i < size ; i++)
	{
	action(array[i]);
	}
}

