#include "main.h"
#include <string.h>
/**
 * _memcpy - copies a data from src to dest upto n bytes
 * @dest: the destination
 * @src: the source
 * @n: the number of bytes to be copied
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	return (memcpy(dest, src, n));
}
