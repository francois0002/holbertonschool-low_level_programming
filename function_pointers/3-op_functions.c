#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
* op_add -fonction qui additionne
* @a: nombre 1 choisi
* @b: nombre 2
* Return:résultat
*/

int op_add(int a, int b)
{
	int resultat;

	resultat = a + b;
	return (resultat);
}

/**
* op_sub -fonction qui soustrait
* @a: nombre 1 choisi
* @b: nombre 2
* Return:résultat
*/

int op_sub(int a, int b)
{
	int resultat;

	resultat = a - b;
	return (resultat);
}

/**
* op_mul -fonction qui multiplie
* @a: nombre 1 choisi
* @b: nombre 2
* Return:résultat
*/

int op_mul(int a, int b)
{
	int resultat;

	resultat = a * b;
	return (resultat);
}


/**
* op_div -fonction qui divise
* @a: nombre 1 choisi
* @b: nombre 2
* Return:résultat
*/

int op_div(int a, int b)
{
	int resultat;

	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	resultat = a / b;
	return (resultat);
}

/**
* op_mod -fonction qui fait le modulo
* @a: nombre 1 choisi
* @b: nombre 2
* Return:résultat
*/

int op_mod(int a, int b)
{
	int resultat;

	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	resultat = a % b;
	return (resultat);
}
