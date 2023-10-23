#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * _puts - Entry point
 * Description: afficher une chaine de caractère
 * @str : chaine de caractère
 * Return:  n
 */
void _puts(char *str)
{
int i;
for (i = 0 ; *str != '\0' ; i++)
{
	putchar(*str);
	str++;
}
putchar('\n');
}
