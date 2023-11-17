#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include <unistd.h>
#include "variadic_functions.h"




/**
* print_char -affiche la string
* @args: type d'argument passé dans la fonction
* c : char, i : interger, f : float, s : float
*/
void print_char(va_list args)
{
	char c = va_arg(args, int);

	printf("%c", c);
}

/**
* print_int -affiche un int
* @args: type d'argument passé dans la fonction
* c : char, i : interger, f : float, s : float
*/
void print_int(va_list args)
{
	int i = va_arg(args, int);

	printf("%d", i);
}
/**
* print_float -affiche un float
* @args: type d'argument passé dans la fonction
* c : char, i : interger, f : float, s : float
*/
void print_float(va_list args)
{
	float f = (float)va_arg(args, double);

	printf("%f", f);
}
/**
* print_string -affiche une string
* @args: type d'argument passé dans la fonction
* c : char, i : interger, f : float, s : float
*/
void print_string(va_list args)
{
	char *s = va_arg(args, char *);

	if (s == NULL)
	{
		printf("(nil)");
	}
	{
		printf("%s", s);
	}
}

/**
* print_all -affiche la string
* @format: type d'argument passé dans la fonction
* c : char, i : interger, f : float, s : float
*/

void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0, j = 0;
	char *separator = "";
	printer_t tab_foo[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};
	va_start(args, format);
	/**
	* initialise la première boucle pour parcourir les formats
	* rentrés dans la fonction main (s, d, i...)
	*/
	while (format[i] != '\0')
	{
		j = 0;
	/**
	* initialise la 2ème boucle pour comparer les formats rentrés
	* dans la fonction main (s, d, i ...) et ceux de la structure de tableau
	* créé predemment. j < 4 car il y a 4 éléments dans le tableau.
	*/
		while (j < 4 && format[i] != *(tab_foo[j].identifiant))

			j++;

		if (j < 4)
		{
			printf("%s", separator);
			tab_foo[j].ptr_sur_fprint(args);
			separator = ", ";
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
