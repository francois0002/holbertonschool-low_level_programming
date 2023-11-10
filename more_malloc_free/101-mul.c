#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/**
* main - check the code
* @argc : argc
* @argv : argv
* Return: Always 0.
*/
int main(int argc, char *argv[])
{
	int result;
	int *tab_result;
	int nombre1;
	int nombre2;
	int i;


	if (argc != 3)
	{
		printf("error");
		exit(98);
	}

	nombre1 = atoi(argv[1]);
	nombre2 = atoi(argv[2]);
	result = nombre1 * nombre2;
	tab_result = malloc(sizeof(int) * nombreDeChiffres(result));
	if (tab_result == NULL)
	{
		exit(1);
	}
	for (i = 0 ; i < nombreDeChiffres(result) ; i++)
	{
	tab_result[i] = recupererChiffre(result, i + 1);
	}
	for (i = nombreDeChiffres(result) - 1 ; i >= 0 ; i--)
	{
	printf("%d", tab_result[i]);
	}
	printf("\n");
	free(tab_result);
	return (0);
}

/**
* nombreDeChiffres- Entry point
* Description: retourne le nombre de chiffre d'un int
* @nombre : le nombre à inspecter
* Return: nombre de chiffres
*/

int nombreDeChiffres(int nombre)
{
	int count = 0;

	if (nombre == 0)
	{
		return (1);
	}

	while (nombre != 0)
	{
		nombre = nombre / 10;
		++count;
	}

	return (count);
}

/**
* recupererChiffre- Entry point
* Description: retourne le n ème chiffre d'un nombre
* @nombre : le nombre à inspecter
* @n : numéro du chiffre
* Return: n
*/


int recupererChiffre(int nombre, int n)
{

	int i;

	if (n <= 0)
	{
		return (-1);
	}

	for (i = 1 ; i < n ; ++i)

	{
		nombre /= 10;
	}

	return (nombre % 10);
}
