#include "main.h"
#include <stdlib.h>

/**
 * print_last_digit - print last digit of a number
 *
 * @num: The number
 *
 * Return: The last digit of @num
 *
 */

int print_last_digit(int num)
{
	int result;
	int tmp;

	tmp = abs(num) % 10;
	result = abs(tmp);
	_putchar(result + '0');

	return (result);

}
