#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * Description: afficher nombre en hexadecimal
 * Return:  0
 */
int main(void)
{
int number;
int espace = 32;
for (number = '0' ;  number <= '9' ; number++)
{
putchar(number);
putchar (',');
putchar (espace);
}
putchar ('\n');
return (0);
}
