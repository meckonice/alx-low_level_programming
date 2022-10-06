#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - concats two strings
 * @s1: the first string
 * @s2: the second string
 * @n: the number of chars in s2 to be concated
 * Return: the new sting
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i;
	unsigned int j;
	unsigned int s1_size;
	unsigned int s2_size;
	char *new;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	s1_size = strlen(s1);
	s2_size = strlen(s2);
	if (n >= s2_size)
	{
		new = malloc(sizeof(char) * ((s1_size + s2_size + 1)));
		if (new == NULL)
			return (NULL);
		for (i = 0; i < s1_size; i++)
			new[i] = s1[i];
		for (j = 0; j < s2_size; j++)
			new[s1_size + j] = s2[j];
		new[s1_size + s2_size] = '\0';
	}
	else
	{
		new = malloc(sizeof(char) * ((s1_size + n + 1)));
		if (new == NULL)
			return (NULL);
		for (i = 0; i < s1_size; i++)
			new[i] = s1[i];
		for (j = 0; j < n; j++)
			new[s1_size + j] = s2[j];
		new[s1_size + n] = '\0';
	}
	return (new);
}
