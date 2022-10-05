#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * strlength - returns the combined length of strings
 * @ac: the number of strings
 * @av: an arrsy of strings
 * Return: the length
 */
unsigned int strlength(int ac, char **av)
{
	int i;
	unsigned int length = 0;

	for (i = 0; i < ac; i++)
		length += strlen(av[i]);

	return (length);
}
/**
 * argstostr - prints the arguments passed on new line
 * @ac: the number of arguments
 * @av: the arguments
 * Return: a new string containing the arguments
 */
char *argstostr(int ac, char **av)
{
	int i;
	int j;
	int k = -1;
	char *str;
	int size;

	if (ac == 0 || av == NULL)
		return (NULL);
	size = strlength(ac, av) + ac + 1;
	str = malloc(sizeof(char) * (unsigned int)size);
	if (str == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			str[++k] = av[i][j];
		}
		str[++k] = '\n';
	}

	return (str);
}

