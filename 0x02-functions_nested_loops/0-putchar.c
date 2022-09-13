#include "main.h"
/**
 * main - check the code
 *
 * Return: Always 0
 *
 */
int main(void)
{
	char string[8] = "_putchar";
	int n = 0;

	while (n < 8)
	{
		_putchar(string[n]);
		++n
	}

	_putchar(10);
	return (0);


}
