#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * print_dog - prints the contents of the struct dog
 * @d: a pointer to a dog struct
 * Return: void
 */
void print_dog(struct dog *d)
{
	char *name;
	char *owner;

	if (d == NULL)
		printf(" ");
	else
	{
		name = malloc(sizeof(d->name));
		if (name == NULL)
			printf("Name: (nil)\n");
		else
		{
			strcpy(name, d->name);
			printf("Name: %s\n", name);
		}
		if (d->age != 0)
			printf("Age: %f\n", d->age);
		else
			printf("Age :(nil)\n");
		owner = malloc(sizeof(d->owner));
		if (owner == NULL)
			printf("Owner: (nil)\n");
		else
		{
			strcpy(owner, d->owner);
			printf("Owner: %s\n", owner);
		}
		free(name);
		free(owner);
	}
}
