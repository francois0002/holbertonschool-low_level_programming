#include <stdlib.h>
#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * _strncat - Entry point
 * Description: copie chaine de caractères
 * @dest: destination
 * @src: chaine à copier
 * Return:  dest
 */
char *_strncpy(char *dest, char *src, int n)
{
_strcpy(dest + _strlen(dest), src - (strlen(src)+n));
return (dest);
}
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
/**
 * _strlen - Entry point
 * Description: renvoi la longeur d'une chaine de caractère
 * @s : caractère de  la variable
 * Return:  n
 */
int _strlen(char *s)
{
int longueur;
for (longueur = 0 ; *s != '\0' ; longueur++)
{
	s++;
}
return (longueur);
}
