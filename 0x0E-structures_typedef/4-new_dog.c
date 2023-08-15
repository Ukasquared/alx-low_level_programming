#include "dog.h"

/**
 * new_dog - initializes new dog and creates copy for name and owner
 *
 * @name: name of dog
 *
 * @age: age of dog
 *
 * @owner: name of owner
 *
 * Return: NULL if function fails, d on success
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	char *namedg, *ownerdg;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
	{
		return (NULL);
	}

	namedg = malloc(strlen(name) + 1);
	if (namedg == NULL)
	{
		free(d);
		return (NULL);
	}
	strcpy(namedg, name);

	ownerdg = malloc(strlen(owner) + 1);
	if (ownerdg == NULL)
	{
		free(namedg);
		free(d)
		return (NULL);
	}
	strcpy(ownerdg, owner);

	d->name = namedg;
	d->age = age;
	d->owner = ownerdg;

	return (d);
}
