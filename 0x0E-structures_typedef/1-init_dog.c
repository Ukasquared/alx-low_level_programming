#include "dog.h"

/**
* init_dog - initializse a vairiabe of type struct dog
*
* @d: pointer to struct
* @name: name of dog
* @age: dog's age
* @owner: owner's name
* Return: void
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
