#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array with arranged elements
 * @min: the first element
 * @max: the last element
 * Return: the array
 */
int *array_range(int min, int max)
{
	int i;
	int *array;
	int elements;

	if (min > max)
		return (NULL);
	elements = (max - min) + 1;
	array = malloc(sizeof(int) * elements);
	if (array == NULL)
		return (NULL);
	for (i = 0; i < elements; i++)
		array[i] = min + i;
	return (array);
}
