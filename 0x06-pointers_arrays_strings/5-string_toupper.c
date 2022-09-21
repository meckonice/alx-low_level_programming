#include "main.h"
#include <string.h>
#include <ctype.h>
/**
 * string_toupper - changes a string to upper case letters
 * @str: the string
 * Return: the changed string
 */
char *string_toupper(char *str)
{
	int i;
	int length = strlen(str);
	char tmp[2000];

	strcpy(tmp, str);
	for (i = 0; i < length; i++)
		*(str + i) = toupper(*(tmp + i));
	return (str);
}
