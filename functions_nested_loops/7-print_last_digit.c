#include <time.h>
#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
 * print_last_digit - Entry point
 * Description: afficher la valeur d'un dernier nombre
 * @num: variable d'un nombre entier
 * Return:  m
 */
int print_last_digit(int num)
{
	int last_digit = num % 10;

	if (last_digit < 0)
	{
		last_digit *= -1;
	}
	_putchar ('0' + last_digit);
	return (last_digit);
}
