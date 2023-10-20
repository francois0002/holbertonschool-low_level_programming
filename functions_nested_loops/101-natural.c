#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int compteur;
	int sum_nbr_naturel;

	for (compteur = 0 ; compteur < 1024 ; compteur++)
	{
		if (compteur % 3 == 0 || compteur % 5 == 0)
		{
			sum_nbr_naturel = sum_nbr_naturel + compteur;
		}
	}
	printf("%d", sum_nbr_naturel);
	printf("\n");
	return (0);
}
