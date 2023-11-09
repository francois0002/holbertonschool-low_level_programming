#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
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
	if (nombre1 < 0 || nombre2 < 0)
	{
		exit(98);
	}
	result = nombre1 * nombre2;
	printf("result = %d\n", result);
	return (0);
}