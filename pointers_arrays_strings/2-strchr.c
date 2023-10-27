#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * _strchr - Entry point
 * Description: focntion qui permet de trouver un charactère et d'afficher
 * @s : string
 * @c : char qui servira de base
 * Return: dest
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		if (s[i] == c)
		{
		return (s + i);

		}
	}
	return (0);
}
