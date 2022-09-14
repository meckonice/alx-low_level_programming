#include "main.h"
#include <ctype.h>

/**
 * _isalpha - check for alphabets
 *
 * @c: The letter to be checked
 *
 * Return: 1 if the character is alphabet otherwise 0
 *
 */

int _isalpha(int c)
{
	int result;

	if (isalpha(c) == 0)
		result = 0;
	else
		result = 1;
	return (result);

}
