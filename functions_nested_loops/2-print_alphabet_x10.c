#include <time.h>
#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
 * print_alphabet_x10 - Entry point
 * Description: afficher alphabet de a à z avec putchar
 * Return:  0
 */
void print_alphabet_x10(void)
{
	int i;
	char a;

	for (i = 0 ; i < 10 ; i++)
	{
		for (a = 97; a <= 122 ; a++)
		{
			_putchar(a);
		}
		_putchar('\n');
	}
}
