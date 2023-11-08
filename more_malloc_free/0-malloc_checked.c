#include <stdio.h>
#include <stdlib.h>
/**
* malloc_checked- Entry point
* Description: aloue de la mémoire
* @b : nombre de bloc a allouer
* Return: pointeur
*/

void *malloc_checked(unsigned int b)
{
	void *adresse;

	adresse = malloc(b);
	if (adresse == NULL)
	{
		exit(98);
	}
	return (adresse);
}
