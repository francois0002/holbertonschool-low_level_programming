#include <stdio.h>
/**
 * factorial- Entry point
 * Description: calcul du factoriel
 * @n: nombre a factorisé
 * Return: resultat
 */

int factorial(int n)
{
	int resultat = 0;

	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
	resultat = n * factorial(n - 1);
	return (resultat);
	}
}
