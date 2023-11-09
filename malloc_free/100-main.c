#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - check the code
 * @argc : argc
 * @argv : argv
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int result;
	int nombre1;
	int nombre2;

	if (argc != 3)
	{
		printf("error");
		exit(98);
	}
	nombre1 = atoi(argv[1]);
	nombre2 = atoi(argv[2]);
	if (isdigit(argv[1]) != 0 || isdigit(argv[2]) != 0)
	{
		exit(98);
	}
	if (argv[1] < 0 || argv[2] < 0)
	{
		return (NULL);
	}
	result = nombre1 * nombre2;
}
