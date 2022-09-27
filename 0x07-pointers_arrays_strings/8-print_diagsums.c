#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the diagonal sums of a matrix
 * @a: the matrix
 * @size: the size of the matrix
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int first_diagonal = 0;
	int second_diagonal = 0;
	int i;
	int j;

	for (i = 0; i < (size * size); i = (size + (i + 1)))
		first_diagonal += *(a + i);
	printf("%d, ", first_diagonal);
	for (j = (size - 1); j < (size * size); j += (size - 1))
	{
		if (j == ((size * size) - 1))
			break;
		second_diagonal += *(a + j);
	}
	printf("%d\n", second_diagonal);
}
