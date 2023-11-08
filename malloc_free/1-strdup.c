#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
* _strdup- Entry point
* Description: copier une string en allocation mémoire
* @str : string
* Return: copie de la string
*/

char *_strdup(char *str)
{
char *copy_str;

copy_str = (char *) malloc(sizeof(char) * _strlen(str));
if (copy_str == NULL)
{
	return (NULL);
}
copy_str = _strcpy(copy_str, str);
return (copy_str);
}

/**
 * _strlen - Entry point
 * Description: renvoi la longeur d'une chaine de caractère
 * @s : caractère de  la variable
 * Return:  longueur
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

