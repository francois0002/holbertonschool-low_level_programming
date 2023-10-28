#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * cap_string - Entry point
 * Description: mettre la première lettre du mot en capital.
 * @str : chaine de caractère
 * Return: str
 */

char *cap_string(char *str)
{
	int index = 1;

	for (index = 1 ; str[index] == '\0' ; index++)
	{
		if (str[index - 1] == ' ')
		str[index] = str[index] - 32;
		if (str[index - 1] == ';')
		str[index] = str[index] - 32;
		if (str[index - 1] == '.')
		str[index] = str[index] - 32;
	}
	return (str);
}

