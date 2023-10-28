#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * _strpbrk - Entry point
 * Description: focntion qui permet de compter le nbr de carac d'une chaine
 * @s: string
 * @accept : string2
 * Return: compteur de caractère
 */
char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		for (j = 0 ; accept[j] != '\0' ; j++)
		{
			if (accept[j] == s[i])
			{
				return (s + i);
			}
		}
	}
	return (0);
}
