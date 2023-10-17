#include <time.h>
#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
 * print_alphabet - Entry point
 * Description: afficher alphabet de a à z avec putchar
 * Return:  0
 */
void print_alphabet(void)
{
	char a;

	for (a = 97; a <= 122 ; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
