#include "main.h"
#include <string.h>
/**
 * _strchr - returns the address of the first occurence of c in s
 * @s: the string
 * @c: the character
 * Return: the address of c in s
 */
char *_strchr(char *s, char c)
{
	return (strchr(s, c));
}
