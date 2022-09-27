#include "main.h"
#include <string.h>
/**
 * _memset - fills the  a memory upto n bytes using b
 * @s: the pointer to an address
 * @b: data to be filled
 * @n: the number of bytes to be filled
 * Return: the address of s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(s + i) = b;
	return (s);
}
