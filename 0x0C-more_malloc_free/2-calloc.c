#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _calloc - assigns a memory to an array
 * @nmemb: the number of elements
 * @size: the size of each element
 * Return: the array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *array;

	if (nmemb == 0 || size == 0)
		return (NULL);
	array = malloc((nmemb * size));
	if (array == NULL)
		return (NULL);
	memset(array, 0, nmemb * size);
	return (array);
}
