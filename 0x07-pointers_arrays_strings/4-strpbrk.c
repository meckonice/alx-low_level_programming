#include "main.h"
#include <string.h>
/**
 * _strpbrk - returns the first occurence of a character in accept
 * @s: the string to be searched
 * @accept: the collection of characters
 * Return: the address of the a character in s
 */
char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}
