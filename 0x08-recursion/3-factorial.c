#include "main.h"
/**
 * factorial - calculates a factorial of a number recursively
 * @n: the number
 * Return: the factorial of @n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
