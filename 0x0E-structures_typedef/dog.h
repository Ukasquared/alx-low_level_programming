#ifndef dog_h
#define dog_h

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
};

void init_dog(struct dog *, char *, float, char *);

/**
 * dog_t - modified struct dog
 */
typedef struct dog dog_t;

void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
