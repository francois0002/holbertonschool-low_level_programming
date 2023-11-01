#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - Entry point
 * Description: additionne les nombres positifs
 * @argc : nombre d'argument dans la commande
 * @argv : texte de la commande
 * Return:  0
 */


int main(int argc, char *argv[])
{
	int compteur;
	int resultat = 0;

	if (argc == 1)
	{
		printf("0");
		return (1);
	}

	for (compteur = 1; compteur < argc ; compteur++)
	{
		if (!isdigit(*argv[compteur]))
		{
			printf("Error\n");
			return (1);
		}
	}
	for (compteur = 1; compteur < argc ; compteur++)
	{
		resultat = resultat + atoi(argv[compteur]);
	}
	printf("%d\n", resultat);
	return (0);
}

