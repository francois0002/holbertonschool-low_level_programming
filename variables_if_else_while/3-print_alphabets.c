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
char alpha_upper;

for (alpha_lower = 'a' ; alpha_lower <= 'z' ; alpha_lower++)
{
putchar (alpha_lower);
}
for (alpha_upper = 'A' ; alpha_upper <= 'Z' ; alpha_upper++)
{
putchar (alpha_upper);
}
putchar ('\n');
return (0);
}
