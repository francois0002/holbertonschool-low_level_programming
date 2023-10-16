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
char alpha_lower;
int number;

for (number = '0' ;  number <= '9' ; number++)
{
putchar(number);
}
for (alpha_lower = 'a' ;  alpha_lower <= 'f' ; alpha_lower++)
{
putchar (alpha_lower);
}
putchar ('\n');
return (0);
}
