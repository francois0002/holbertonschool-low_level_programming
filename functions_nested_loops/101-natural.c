#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int compteur;

	for (compteur = 0 ; compteur < 1024 ; compteur++)
	{
		if (compteur % 3 == 0)
		{
			printf("%d", compteur);
		}
		else if (compteur % 5 == 0)
		{
			printf("%d", compteur);
		}
	}
	printf("\n");
	return (0);
}
