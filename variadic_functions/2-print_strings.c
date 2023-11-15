#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include <unistd.h>

/**
* print_strings -affiche la string
* @separator: string qui sépare les nombres
* @n: nombre d'éléments
*/

void print_strings(const char *separator, const unsigned int n, ...)

{
	unsigned int i;
	va_list arg;
	char *string;

	if (n > 0)
	{
	va_start(arg, n);
	}

	for (i = 0 ; i < n ; i++)
	{
		string = va_arg(arg, char *);
		if (string == NULL)
		{
			strcpy(string, "(nil)");
		}
		printf("%s", string);
		if (i < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");

}
