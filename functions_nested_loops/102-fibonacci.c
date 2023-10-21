#include <stdio.h>

/**
 * main - liste les nombres de la suite Fibonacci
 *
 * Return: Always 0.
 */
int main(void)
{
	int compteur;
	unsigned long  nbr_1 = 0;
	unsigned long  nbr_2 = 1;
	unsigned long sum = nbr_1 + nbr_2;

	for (compteur = 0 ; compteur < 49 ; compteur++)
	{
	sum = nbr_1 + nbr_2;
	nbr_1 = nbr_2;
	nbr_2 = sum;
	printf("%lu, ", sum);
	}
	printf("20365011074");
	printf("\n");
	return (0);
}
