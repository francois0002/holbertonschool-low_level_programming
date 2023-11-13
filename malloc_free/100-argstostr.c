#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>



/**
* main - fuisionne les arguments et les mets a la ligne
* @argv : argv string a fusionner
* @argc : argc compteur
* Return: Always 0.
*/
int main(int argc, char *argv[])
{
char *tab_main;

int j;

int i;

char *pt_argv = *argv;

for (i = 1 ; i < argc ; i++)
{
tab_main = malloc(sizeof(char) * strlen(argv[i]));
if (tab_main == NULL)
{
	exit(1);
}
}

for (i = 1 ; i < argc ; i++)
{
	j = 0;
	tab_main[j] = pt_argv;
	j++;
}

for (i = 0 ; i < 10; i++)
{
	printf("%s", tab_main[i]);
}
free(tab_main);
return (0);
}
