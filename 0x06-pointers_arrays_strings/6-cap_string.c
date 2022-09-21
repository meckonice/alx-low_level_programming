#include "main.h"
#include <string.h>
#include <ctype.h>

/**
 * cap_string - capitalize each word in a string
 * @str: the input string
 * Return: the capitalized string
 */
char *cap_string(char *str)
{
	int i;
	int j;
	int length = strlen(str);
	char tmp[3000];
	char separators[] = {' ', '\t', '\v', '\n', ',', ';', '.', '!', '?', '"',
		'(', ')', '{', '}'};

	strcpy(tmp, str);
	for (i = 0; i < length; i++)
	{
		for (j = 0; j < 14; j++)
		{
			if (i == 0 && isalpha(str[i]) != 0)
				*(str + i) = toupper(*(tmp + i));
			else if (str[i] == separators[j])
				*(str + (i + 1)) = toupper(*(tmp + (i + 1)));
		}
	}
	return (str);
}
