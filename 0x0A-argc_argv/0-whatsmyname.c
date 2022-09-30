#include <stdio.h>
/**
 * main - prints the name of the program
 * @argc: the number of arguments to the program
 * @argv: the pointers to the arguments
 * Return: 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
