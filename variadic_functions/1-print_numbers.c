#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include <unistd.h>

/**
* print_numbers -affiche les nombres
* @separator: string qui sépare les nombres
* @n: nombres
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int number;
	va_list arg;

	if (n == 0)
	{
		return;
	}


	va_start(arg, n);


	for (i = 0 ; i < n ; i++)
	{
		number = va_arg(arg, int);
		printf("%d", number);
		if (i < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");

}