#include "main.h"
#include <string.h>
/**
 * _strstr - finds the first occurence of a string
 * @haystack: the string
 * @needle: the string to be searched
 * Return: the address of the string
 */
char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}
