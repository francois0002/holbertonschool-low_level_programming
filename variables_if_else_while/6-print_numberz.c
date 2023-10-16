#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * Description: afficher nombre
 * Return:  0
 */
int main(void)
{
int number;

for (number = 0 ; number <= 9 ; number++)
{
putchar ('0' + number);
}
putchar ('\n');
return (0);
}
