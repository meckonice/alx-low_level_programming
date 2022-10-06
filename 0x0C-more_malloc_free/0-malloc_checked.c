#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates a memory
 * @b: the size of the memory
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
	void *mem;

	mem = malloc(b);
	if (mem == NULL)
	{
		exit(98);
		return (NULL);
	}
	else
		return (mem);
}
