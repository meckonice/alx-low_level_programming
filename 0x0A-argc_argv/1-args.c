#include <stdio.h>
/**
 * main - prints the number of the arguments
 * @argc: the number of arguments
 * @argv: the arguments
 * Return: 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
