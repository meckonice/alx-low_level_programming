#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array and initialize it
 * @size: the size of the array
 * @c: the first character of the array
 * Return: a pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	char *array_ptr;
	unsigned int i;

	if (size == 0)
		return (NULL);
	array_ptr = malloc(sizeof(char) * size);
	if (array_ptr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		array_ptr[i] = c;
	return (array_ptr);
}
