#include <stdio.h>
/**
 * main - Entry point
 * Description: affiche les arguments entrés
 * @argc : nombre d'argument dans la commande
 * @argv : texte de la commande
 * Return:  0
 */
int main(int argc, char *argv[])
{
	int compteur;

	for (compteur = 0 ; compteur < argc ; compteur++)
	{
	printf("%s\n", argv[compteur]);
	}
	return (0);
}
