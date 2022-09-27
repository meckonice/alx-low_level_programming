#include "main.h"
/**
 * _strspn - Returns the number of bytes in the initial
 *           segment of s which consist only of bytes from accept
 * @s: the string
 * @accept: the comparision string
 * Return: the number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int j = 0;
	unsigned int result = 0;

	while (s[i] != '\0')
	{
		if (s[i] == ' ')
			break;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
				result += 1;
			j++;
		}
		i++;
		j = 0;
	}
	return (result);
}
