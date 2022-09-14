#include "main.h"
/**
 * print_sign - checks the sign of the number and print it
 *
 * @n: The number to be checked
 *
 * Return: 1 if n is positive, -1 if n is negative and 0 if n is zero
 *
 */

int print_sign(int n)
{
	int result;

	if (n > 0)
	{
		result = 1;
		_putchar('+');
	}
	else if (n < 0)
	{
		result = -1;
		_putchar('-');
	}
	else
	{
		result = 0;
		_putchar('0');
	}

	return (result);
}
