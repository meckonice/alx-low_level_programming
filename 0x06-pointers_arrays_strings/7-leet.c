#include "main.h"
#include <string.h>
#include <ctype.h>
/**
 * leet - c0nv3r7s 4 s7ring int0 4 1337 s7ring
 * @str: the input string
 * Return: the converted string
 */
char *leet(char *str)
{
	int i;
	int j;
	int length = strlen(str);
	char replacements[] = {'4', '3', '0', '7', '1'};
	char letters[] = {'a', 'e', 'o', 't', 'l'};

	for (i = 0; i < length; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (tolower(str[i]) == letters[j])
				str[i] = replacements[j];
		}
	}
	return (str);
}
