#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - frees the memory occupied by dog_t
 * @d: a pointer to a dog_t
 * Return: void
 */
void free_dog(dog_t *d)
{
	free(d);
}
