#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * Description: afficher nombre de 1 à 9 avec virgule et espace
 * Return:  0
 */
int main(void)
{
int number;
int espace = 32;
int virgule = 44;

for (number = 48 ;  number < 58 ; number++)
{
putchar (number);
if (number < 57)
{
putchar (virgule);
putchar (espace);
}
}

putchar ('\n');
return (0);
}
