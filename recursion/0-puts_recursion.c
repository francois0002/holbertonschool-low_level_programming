#include <stdio.h>
/**
 * _puts_recursion- Entry point
 * Description: écrit une string
 * @s: string
 * Return: s
 */

void _puts_recursion(char *s)
{
	int i = 0;

	if (s[i] == '\0')
	{
		putchar('\n');
		return;
	}
	putchar(s[i]);
	_puts_recursion(s + 1);
	i++;
}
