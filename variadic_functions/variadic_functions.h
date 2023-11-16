
#ifndef __PLAYER_H__
#define __PLAYER_H__
#include <stdarg.h>

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);


/**
 * struct str_format - structure qui prend la fonction et le format
 * @identifiant: i, d, f ,c format rentré
 * @ptr_sur_fprint: fonction printf à aller chercher
 */
typedef struct str_format
{
	char *identifiant;
	void (*ptr_sur_fprint)(va_list arg);

} printer_t;
#endif


