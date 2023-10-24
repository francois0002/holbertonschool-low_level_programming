#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * _strcpy - Entry point
 * Description: copie la chaine de caractère
 * @dest : copie de src
 * @src : chaine de caractère qui sera copie
 */
 

char *_strcpy(char *dest,  char *src)
{
int n;
for (n = 0 ; n != '\0' ; n++)
{
dest[n] = src[n];
}
dest[n++] = '\0';
return(dest);
}

