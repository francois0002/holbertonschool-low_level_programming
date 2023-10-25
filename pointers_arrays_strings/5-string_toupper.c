
#include "main.h"

/**
 * string_toupper - Entry point
 * Description: transforme en uppercase
 * @str : string
 * Return:  str
 */
char *string_toupper(char *str)
{
	int n;

	for (n = 0 ; str[n] != '\0'; n++)
	{
		if (str[n] >= 'a' && str[n] <= 'z')
		{
			str[n] = str[n] - 32;
		}
	}
return (str);
}

