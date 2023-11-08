#include <stdio.h>
#include <stdlib.h>
/**
* create_array- Entry point
* Description: create a dynamic array char
* @size : sizes of array
* @c : character
* Return: array
*/

char *create_array(unsigned int size, char c)
{
unsigned int i;
char *array;

if (size == 0)
{
	return (NULL);
}

array = (char *) malloc(sizeof(char) * size);
if (array == NULL)
{
	return (NULL);
}
for (i = 0 ; i < size ; i++)
{
	array[i] = c;
}

return (array);
}
