
#include "main.h"

/**
 * string_toupper - Entry point
 * Description: transforme en uppercase
 * @dest : string
 * Return:  dest
 */
char *string_toupper(char *src)
{
int n;

for (n=0 ; src[n] != '\0'; n++)
	{
		if ( src[n] >= 'a' && src[n] <= 'z')
			{
				src[n] = src[n] - 32;
			}
	}
return (src[n]);
}

