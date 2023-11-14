#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* print_name -affiche le nom de quelqu'un via plusieurs fonction
* @name: nom de quelqu'un
* @f: fonction a appelé sur la cette fonction, ex uppercase
*/

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
	{
		return;
	}
	f(name);
}

