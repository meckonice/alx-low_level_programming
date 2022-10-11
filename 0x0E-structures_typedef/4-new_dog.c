#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - create a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: the new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = name;
	dog->age = age;
	dog->owner = owner;
	return (dog);
}
