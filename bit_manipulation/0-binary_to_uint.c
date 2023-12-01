#include "main.h"

/**
* binary_to_uint- onverts a binary number to an unsigned int
* @b : pointing to a string of 0 and 1 chars
* Return: converted number,
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	if (b == NULL)
		return (0);


	while (*b != '\0')
	{
		if (*b == '0' || *b == '1')
		{
			result = result * 2 + (*b - '0');
			b++;
		}
		else
		return (0);

	}

	return (result);
}
