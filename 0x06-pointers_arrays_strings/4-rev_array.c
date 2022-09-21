#include "main.h"
/**
 * reverse_array - reverses an array
 * @a: the array
 * @n: the length of the array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i;
	int j;
	int tmp[1000];

	for (i = 0; i < n; i++)
		tmp[i] = a[i];
	for (j = 1; j <= n; j++)
		a[j - 1] = tmp[n - j];
}
