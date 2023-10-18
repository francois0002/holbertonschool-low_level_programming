#include <time.h>
#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
 * jack_bauer - Entry point
 * Description: afficher chaque minute de la journée de minuit à 23h59
 * Return:  m
 */
void jack_bauer(void)
{
	for (seconde = 0 ; seconde < 9 ; seconde++)	
	{
		_putchar('0'+ seconde);
		_putchar('\n');
	}
			
}
