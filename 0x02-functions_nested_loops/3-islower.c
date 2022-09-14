#include "main.h"
#include <ctype.h>

/**
 * _islower - check if a character is small letter
 *
 * @c: the character to be checked
 *
 *
 * Return: return 1 if the character is lower case otherwise 0
 *
 */

int _islower(int c)
{
	int result;

	if (islower(c) == 0)
		result = 0;
	else
		result = 1;
	return (result);
}
