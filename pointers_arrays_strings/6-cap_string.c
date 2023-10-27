#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * cap_string - Entry point
 * Description: mettre la première lettre du mot en capital.
 * @str : chaine de caractère
 * Return: str
 */

char *cap_string(char *str)
{
	int index = 0;
	

for (index = 0 ; str[index] >= 'a' && str[index] <= 'z' ; index++)

{
		if (str[index - 1] == ' ' ||
		    str[index - 1] == '\t' ||
		    str[index - 1] == '\n' ||
		    str[index - 1] == ',' ||
		    str[index - 1] == ';' ||
		    str[index - 1] == '.' ||
		    str[index - 1] == '!' ||
		    str[index - 1] == '?' ||
		    str[index - 1] == '"' ||
		    str[index - 1] == '(' ||
		    str[index - 1] == ')' ||
		    str[index - 1] == '{' ||
		    str[index - 1] == '}' ||
		    index == 0)
		str[index] -= str[index] - 32;

	}

	return (str);
}


/**|| str[n] = ',' || str[n] = ';' || str[n] = '.'|| str[n] = '!'|| str[n] = '?'|| str[n] = '"'|| str[n] = '('|| str[n] = ')''|| str[n] = '{'|| str[n] = '} 

for (n = 0 ; str[n] = 32; n++)



|| str[n] == ',' || str[n] == ';' || str[n] == '.'|| str[n] == '!'|| str[n] == '?'|| str[n] == '"'|| str[n] == '('|| str[n] == ')' || str[n] == '{'|| str[n] == '}'

if (str[n-1] > 0 && str[n-1] < 65 || str[n-1] > 90 && str[n-1] < 97 || str[n-1] > 122 && str[n-1] < 127)


'|| str[i] == ',' || str[i] == ';' || str[i] == '.'|| str[i] == '!'|| str[i] == '?'|| str[i] == '"'|| str[i] == '('|| str[i] == ')' || str[i] == '{'|| str[i] == '}'
*/
