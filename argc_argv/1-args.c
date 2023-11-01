#include <stdio.h>
/**
 * main - Entry point
 * Description: affiche le nombre d'arguments entrés
 * @argc : nombre d'argument dans la commande
 * @argv : texte de la commande
 * Return:  0
 */
int main(int argc, char *argv[])
{
	(void) *argv;
	printf("%d\n", argc - 1);
	return (0);
}
