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
char alpha_lower;

for (alpha_lower = 'a' ; alpha_lower <= 'z' ; alpha_lower++)
{
if (alpha_lower >= 'a'&& alpha_lower < 'e' && alpha_lower >= 'f' && alpha_lower < 'o'  )
{
putchar (alpha_lower);
}
}
putchar ('\n');
return (0);
}
