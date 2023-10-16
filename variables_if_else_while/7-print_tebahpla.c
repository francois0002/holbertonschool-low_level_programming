#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * Description: afficher alphabet a l'envers
 * Return:  0
 */
	 int main(void)
{
char alpha;

for (alpha = 'z' ; alpha >= 'a' ; alpha--)
{
putchar (alpha);
}
putchar ('\n');
return (0);
}
