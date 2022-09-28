#include "main.h"
/**
 * _sqrt_recursion - calcuates square roots
 * @n: the number
 * Return: the root if it is a natural root -1 otherwise
 */
int _sqrt_recursion(int n)
{
	float root;
	int i = 1;

	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	while (i <= n)
	{
		root = (float)n / i;
		if (i == root)
		{
			return ((int)root);
		}
		i++;
	}
	return (-1);
}
