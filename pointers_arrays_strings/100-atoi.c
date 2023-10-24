#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * _atoi - Entry point
 * Description: convertie une chaine de caractère en entier
 * @s : chaine de caractère
 * Return: dest
 */
int _atoi(char *s)
{
	int i = 0;
	int tmp = 0;
	if (s[i] <= 9 && s[i] >= 0)
	{
		for (i = 0 ; s[i] != '\0' ; i++)
		{
			s[i] = tmp;
		}
	}
	return (i);
}
