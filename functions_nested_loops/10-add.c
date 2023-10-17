#include <time.h>
#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
 * add- Entry point
 * Description: permet d'additionner le nombre entier et afficher le résultat
 * @nombre_1: variable int nombre 1
 * @nombre_2: variable int nombre 2
 * Return:  variable resultat nombre 1 + nombre 2
 */
int add(int nombre_1, int nombre_2)
{
int resultat = nombre_1 + nombre_2;
return (resultat);
}
