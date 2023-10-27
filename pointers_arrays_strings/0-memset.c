#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * _memset - Entry point
 * Description: focntion
 * @b : bite initial
 * @n : nombre de bite à remplir
 * @s : tableau
 * Return: adresse de s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
	{
	s[i] = b;
	}
	return (s);
}
