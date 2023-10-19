#include "main.h"
#include <stdio.h>

/**
 * jack_bauer - Entry point
 * Description: afficher chaque minute de la journée de minuit à 23h59
 * Return:  nothing
 */
void jack_bauer(void)
{
	int heure1;
	int heure2;
	int minute1;
	int minute2;

	for (heure1 = 0 ; heure1 <= 2 ; heure1++)
	{
		for (heure2 = 0 ; heure2 < 10 ; heure2++)
		{
			for (minute1 = 0 ; minute1 < 6 ; minute1++)
			{
				for (minute2 = 0 ; minute2 < 10 ; minute2++)
				{
					_putchar('0' + heure1);
					_putchar('0' + heure2);
					_putchar(':');
					_putchar('0' + minute1);
					_putchar('0' + minute2);
					_putchar('\n');
					if (heure1 == 2 && heure2 == 3 && minute1 == 5 && minute2 == 9)
					{
						return;
					}
				}
			}
		}
	}
}

