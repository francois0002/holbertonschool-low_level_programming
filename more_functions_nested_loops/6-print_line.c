#include <time.h>
#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
 * print_line- Entry point
 * Description: affiche une ligne dans le terminal
 * @n : nombre qui sera remplacé par un underscore
 * Return:  nothing
 */
void print_line(int n)
{
int compteur;
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (compteur = 0 ; compteur < n ; compteur++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}

