#include <stdio.h>

/**
 * main - liste les nombres de la suite Fibonacci
 *
 * Return: Always 0.
 */
int main(void)
{
	int compteur;
	int sum;

	for (compteur = 1 ; compteur < 51 ; compteur++)
	{
		sum = sum + compteur;
		printf("%d, ", sum);
	}
	printf("1326");
	printf("\n");
	return (0);
}
