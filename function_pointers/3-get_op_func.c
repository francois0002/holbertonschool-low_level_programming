#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
#include <string.h>

/**
* get_op_func- retourne la fonction + - / * selon le choix de l'user
* @s : opérateur passé dans charv
* Return:retourne la fonction selon l'opérateur choisi
*/

int (*get_op_func(char *s))(int, int)
{
	 op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (ops[i].op != NULL)
	{
		if (strcmp(ops[i].op, s) == 0)
		{
			return (ops[i].f);
		}
		i++;
	}
	return (NULL);

}
