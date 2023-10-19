#include "main.h"
/**
 * jack_bauer - Entry point
 * Description: afficher chaque minute de la journée de minuit à 23h59
 * Return:  nothing
 */
	void jack_bauer(void)
{
	int compteur;
	int heures_1 = 0;
	int heures_2 = 0;
	int minutes_2 = 0;
	int minutes_1 = 0;

	putchar('0');
	putchar('0');
	putchar(':');
	putchar('0');
	putchar('0');
	putchar('\n');
	for (compteur = 0 ; compteur < 1439 ; compteur++)
	{
		minutes_2++;
		if (minutes_2 > 9)
		{
		minutes_2 = 0;
		minutes_1++;
		}
		putchar(heures_1 + '0');
		if (minutes_1 > 5)
		{
		minutes_1 = 0;
		heures_2++;
		}
		putchar(heures_2 + '0');
		putchar(':');
		if (heures_2 > 9)
		{
		heures_2 = 0;
		heures_1++;
		}
		putchar(minutes_1 + '0');
		putchar(minutes_2 + '0');
		putchar('\n');
	}
}
