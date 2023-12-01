#include "main.h"

/**
* set_bit-  sets the value of a bit to 1 at a given index.
* @n :numbers
* @index :index
* Return:the value of the bit at index
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8 || n == NULL)

	{
		return (-1);
	}

	*n |= (1UL << index);
	return (1);
}
