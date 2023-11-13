#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
* print_dog -print la structure
* @d: pointeur sur la structure
*/

void print_dog(struct dog *d)
{
	char *valeur_null = "(nil)";

	if (d == NULL)
	{
		return;
	}


	if (d->name == NULL)
	{
		d->name = valeur_null;
	}
	if (d->owner == NULL)
	{
		d->name = valeur_null;
	}

	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
