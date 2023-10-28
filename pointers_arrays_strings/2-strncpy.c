#include <stdlib.h>
#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * _strncpy - Entry point
 * Description: copie chaine de caractères
 * @dest: destination
 * @src: chaine à copier
 * @n: entier
 * Return:  dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0 ; i < n ; i++)
	{
		dest[i] = src[i];
		if (src[i] == '\0')
		{
			break;
		}
	}
	return (dest + i);
}
