#include <stdio.h>
/**
 * _pow_recursion- Entry point
 * Description: calcul d'une puissance
 * @x: nombre a mettre puissance
 * @y: exposant
 * Return: resultat
 */

int _pow_recursion(int x, int y)
{

	if (y < 0)
	{
		return (-1);
	}
	if (x == 0)
	{
		return (0);
	}
	if (y == 0)
	{
		return (1);
	}
	else
	{
	return (x * _pow_recursion(x, y - 1));
	}
}
