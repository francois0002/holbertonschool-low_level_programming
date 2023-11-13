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
	if (d == NULL)
	{
		exit(0);
	}
	d->name = malloc(_strlen(name) + 1);
	if (d->name == NULL)
	{
		exit(1);
	}
	 strcpy(d->name, name);

	d->age = age;

	d->owner = malloc(_strlen(owner) + 1);
	if (d->owner == NULL)
	{
		free(d->name);
		exit(1);
	}
	strcpy(d->owner, owner);
}

/**
 * _strlen - Entry point
 * Description: renvoi la longeur d'une chaine de caractère
 * @s : caractère de  la variable
 * Return:  longueur
 */
int _strlen(char *s)
{
int longueur;
for (longueur = 0 ; *s != '\0' ; longueur++)
{
	s++;
}
return (longueur);
}
