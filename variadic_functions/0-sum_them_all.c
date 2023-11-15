#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>

/**
* sum_them_all -fait la somme des nombres listés dans la fonction
* @n: 1er nombre
* Return: somme des nombres
*/

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int somme = 0;
	va_list arg;

	if (n == 0)
	{
		return (0);
	}

	va_start(arg, n);

	for (i = 0 ; i < n ; i++)
	{
		somme = somme + va_arg(arg, int);

	}
	return (somme);
}

