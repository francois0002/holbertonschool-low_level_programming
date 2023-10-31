#include <stdio.h>
/**
 * _print_rev_recursion- Entry point
 * Description: écrit une string en reverse
 * @s: string
 * Return: nothing
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar('\n');
		return;
	}
	_print_rev_recursion(s + 1);
	putchar(*s);
}
