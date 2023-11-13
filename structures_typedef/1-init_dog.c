#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * init_dog -initilise une variable sur la structure dog
 * @d: pointeur sur la structure
 * @name: pointeur sur le nom
 * @age: age du chien
 * @owner: pointeur sur le proprio
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{


	d = malloc(sizeof(struct dog));
	if (d == NULL)
	{
		exit(1);
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
}
