#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * _strstr- Entry point
 * Description: focntion qui permet de compter le nbr de carac d'une chaine
 * @haystack: string
 * @needle: string2
 * Return: compteur de caractère
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;

	for (i = 0 ; haystack[i] != '\0' ; i++)
	{
		for (j = 0 ; needle[j] != '\0' ; j++)
		{
			if (needle[j] == haystack[i])
			{
				return (haystack + i);
			}
		}
	}
	return (0);
}
