#include "function_pointers.h"
/**
 * array_iterator - executes a function on each element of an array
 * @array: the array
 * @size: the size of the array
 * @action: the function to execute
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	for (i = 0; i < (int)size; i++)
		action(array[i]);
}
