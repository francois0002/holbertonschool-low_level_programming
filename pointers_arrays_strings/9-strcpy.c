#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * _strcpy - Entry point
 * Description: copie la chaine de caractère
 * @dest : copie de src
 * @src : chaine de caractère qui sera copie
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
int compteur;

for (compteur = 0 ; src[compteur]  != '\0' ; compteur++)
{
dest[compteur] = src[compteur];
}
dest[compteur++] = '\0';
return (dest);
}

