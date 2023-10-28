#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * print_chessboard- Entry point
 * Description: affiche un échequier
 * @a: contenu de l'echiquer
 * Return: compteur de caractère
 */

void print_chessboard(char (*a)[8])
{
	int ligne;
	int colone;

	for (ligne = 0; ligne < 8; ligne++)
	{
		for (colone = 0; colone < 8; colone++)
		{
			_putchar(a[ligne][colone]);
		}
		_putchar('\n');
	}
}
