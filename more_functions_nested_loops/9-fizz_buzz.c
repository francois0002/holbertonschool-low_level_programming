#include <time.h>
#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
 * main - Entry point
 * Description: afficher les nombres de 1 à 100
 * Return:  0
 */
int main(void)
{
	int compteur;
	int chiffre_remplacement;

	for (compteur = 1 ; compteur < 101 ; compteur++)
	{
		chiffre_remplacement = compteur;
		if (chiffre_remplacement % 3 == 0 && chiffre_remplacement % 5 == 0)
			{
			printf("FizzBuzz ");
			}
		else if (chiffre_remplacement % 3 == 0)
			{
			printf("Fizz ");
			}
		else if (chiffre_remplacement % 5 == 0)
			{
			printf("Buzz ");
			}
		else
		{
			printf("%d ", compteur);
		}
	}
return (0);
}
