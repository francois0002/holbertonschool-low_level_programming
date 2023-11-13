#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog -créer un nouveau chien
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: dog_t
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dogo;

	new_dogo = malloc(sizeof(dog_t));
	if (new_dogo == NULL)
	{
		return (NULL);
	}


	new_dogo->name = malloc(_strlen(name) + 1);
	if (new_dogo->name == NULL)
	{
		exit(1);
	}
	new_dogo->name = name;

	new_dogo->age = age;

	new_dogo->owner = malloc(_strlen(owner) + 1);
	if (new_dogo->owner == NULL)
	{
		free(new_dogo->name);
		exit(1);
	}
	new_dogo->owner = owner;
	return (new_dogo);
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
