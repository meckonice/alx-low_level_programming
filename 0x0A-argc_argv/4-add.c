#include <stdio.h>
#include <stdlib.h>
/**
 * main - adds numbers
 * @argc: number of arguments
 * @argv: arguments
 * Return: 1 if there are arguments that are not numbers
 *         0 if successful
 */
int main(int argc, char *argv[])
{
	int i;
	int j;
	int total;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("%s\n", "Error");
				return (1);
			}
		}
		total += atoi(argv[i]);
	}
	printf("%d\n", total);
	return (0);
}
