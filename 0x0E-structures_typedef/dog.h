#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog data type
 *
 * @name: name of the dog
 *
 * @age: age of the dog
 *
 * @owner: name of the owner
 *
 * Description: defines metadata about the dog
 */

struct dog
{
	char *name;

	float age;

	char *owner;
};


#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/* Additional prototypes */

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);


/**
 * dog_t - typedef for struct dog
 *
 */

typedef struct dog dog_t;

dog_t *new_dog(char *name, float age, char *owner);

void free_dog(dog_t *d);


#endif
