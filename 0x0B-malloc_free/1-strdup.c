#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * _strdup - returns a copy of str
 * @str: the input string
 * Return: a pointer to the copied string
 */
char *_strdup(char *str)
{
	char *new_string;
	int i;
	int size;

	if (str == NULL)
		return (NULL);

	size = strlen(str);
	new_string = malloc(sizeof(char) * (strlen(str) + 1));
	if (new_string == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		new_string[i] = str[i];
	return (new_string);
}
