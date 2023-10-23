#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * swap_int - Entry point
 * Description: inverse 2 nombres
 * @a : premier chiffre
 * @b : deuxieme chiffre
 * Return:  n
 */
void swap_int(int *a, int *b)
{
int tmp;
tmp = *a;
*a = *b;
*b = tmp;
}
