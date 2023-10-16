#include <unistd.h>
#include "main.h"
/**
 * main - Entry point
 * Description: fonction _putchar
 * Return:  0
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
