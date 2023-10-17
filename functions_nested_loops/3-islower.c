#include <time.h>
#include <stdio.h>
#include <unistd.h>
#include <ctype.h>
#include "main.h"
/**
 * _islower - Entry point
 * Description: afficher alphabet de a à z avec putchar
 * Return:  0
 */
int _islower(int c)
{
	if (islower(c) == 2)
	return (1);
	else 
	return (0);
}
