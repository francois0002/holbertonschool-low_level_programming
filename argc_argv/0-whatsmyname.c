#include <stdio.h>
/**
 * main - Entry point
 * Description:ecrit le nom du programme
 * @argc : nombre d'argument dans la commande
 * @argv : texte de la commande
 * Return:  0
 */
int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", argv[0]);
	return (0);
}
