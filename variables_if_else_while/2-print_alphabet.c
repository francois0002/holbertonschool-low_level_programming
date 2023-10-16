#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * Description: afficher alphabet de a à z avec putchar
 * Return:  0
 */
	 int main(void)
{
char alpha;

for (alpha = 'a' ; alpha <= 'z' ; alpha++)
{
putchar (alpha);
}
putchar ('\n');
return (0);
}

