#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * _memcpy- Entry point
 * Description: focntion
 * @src : source  àcopier
 * @n : nombre de valeurs à copier
 * @dest : destination à copie
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
	{
	dest[i] = src[i];
	}
	return (dest);
}
