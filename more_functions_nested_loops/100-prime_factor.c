#include <stdio.h>
#include <math.h>

/**
 * main - facteur premier d'un nombre
 *
 * Return: Always 0.
 */
int main(void)
{
long int nombre = 612852475143;
int diviseur = 2;
int result;
	
	do 
	{
		result = nombre / diviseur;
		printf("%d, ", diviseur);
		diviseur++;
	}
	while (result == floor(result));
printf("\n");
	return (0);
}
