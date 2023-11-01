#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * _strspn - Entry point
 * Description: focntion qui permet de compter le nbr de carac d'une chaine
 * @s: string
 * @accept : string2
 * Return: compteur de caractère
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	unsigned int compteur_caractere = 0;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		for (j = 0 ; accept[j] != '\0' ; j++)
		{
			if (accept[j] == s[i])
			{
				compteur_caractere++;
				break;
			}
			else if (accept[j + 1] == '\0')
			{
			return (compteur_caractere);
			}
		}
	}
	return (compteur_caractere);
}
