#include "main.h"
#include <stdlib.h>
#include <limits.h>
/**
 * _atoi - converts a string to an integer
 * @s: the string
 * Return: an integer from s
 */
int _atoi(char *s)
{
	int sign = 1;
	int base = 0;
	int i = 0;
	int sign_count = 0;

	while (s[i] == ' ' || !(s[i] >= '0' && s[i] <= '9'))
	{
		if (s[i] == '-')
			sign_count += 1;
		i++;
	}
	while (s[i] >= '0' && s[i] <= '9')
	{
		if (base > INT_MAX / 10 || (base == INT_MAX / 10 &&
					s[i] - '0' > 7))
		{
			if (sign == 1)
				return (INT_MAX);
			else
				return (INT_MIN);
		}
		base = 10 * base + (s[i++] - '0');
	}
	if (sign_count % 2 != 0)
		return (base * -1);
	else
		return (base * sign);
}
