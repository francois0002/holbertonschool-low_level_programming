#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "3-calc.h"

/**
* main - check the code calculatrice
* @argc : compteur d'argument
* @argv : opérateur et nombre choisis
* Return: Always 0.
*/
int main(int argc, char *argv[])
{

	int resultat;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}



	if (strcmp(argv[2], "+") != 0 && strcmp(argv[2], "-") != 0 &&
		strcmp(argv[2], "*") != 0 && strcmp(argv[2], "/") != 0 &&
		strcmp(argv[2], "%") != 0)
	{
		printf("Error\n");
		exit(99);
	}

	resultat = (*get_op_func(argv[2]))(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", resultat);
	return (0);
}
