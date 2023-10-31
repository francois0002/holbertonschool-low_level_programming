#include <stdio.h>
/**
 * _strlen_recursion- Entry point
 * Description: écrit une string en reverse
 * @s: string
 * Return: nothing
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return(0);
	}
	return(1 + _strlen_recursion(1 + s));
}
