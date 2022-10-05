#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - concats two strings
 * @s1: the first string
 * @s2: the seecond string
 * Return: the concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	char *concat_string;
	int i;
	int j;
	int size1;
	int size2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	size1 = strlen(s1);
	size2 = strlen(s2);
	concat_string = malloc(sizeof(char) * ((strlen(s1) + strlen(s2) + 1)));
	if (concat_string == NULL)
		return (NULL);
	for (i = 0; i < size1; i++)
		concat_string[i] = s1[i];
	for (j = 0; j < size2; j++)
		concat_string[size1 + j] = s2[j];
	return (concat_string);
}
