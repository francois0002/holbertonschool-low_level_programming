#include <time.h>
#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
 * print_sign - Entry point
 * Description: affiche le signe d'un nombre
 * @n: variable d'un nombre entier positif ou négatif
 * Return:  0
 */
int print_sign(int n)
{
	if (n > 0)
	{
	_putchar('+');
	return (1);
	}
	else if (n == 0)
	{
	_putchar('0');
	return (0);
	}
	else
	{
	_putchar('-');
	return (-1);
	}
}
