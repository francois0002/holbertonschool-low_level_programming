#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Description: multiplie les arguments entrés
 * @argc : nombre d'argument dans la commande
 * @argv : texte de la commande
 * Return:  0
 */


int main(int argc, char *argv[])
{

	int x = atoi(argv[1]);
	int y = atoi(argv[2]);
	int resultat = x * y;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		{
			printf("%d\n", resultat);
		}
	}
	return (0);
}

