#ifndef dog_h
#define dog_h

#include <stdio.h>

/**
* struct dog - a new structure template
* @name: name of dog
* @age: age of dog
* @owner: name of owner
*/

struct dog
{
	char *name;
	float age;
	char *owner;
}

void init_dog(struct dog *, char *, float, char *);

#endif
