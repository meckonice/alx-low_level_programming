#include "main.h"
/**
 * print_result_less_than_10 - Prints the results that are less than 10
 * @result: The number to be printed
 *
 * Return: (void)
 */
void print_result_less_than_10(int result)
{
	_putchar(',');
	_putchar(' ');
	_putchar(' ');
	_putchar(' ');
	_putchar(result + '0');
}
/**
 * print_times_table - print an nxn time table
 * @n: The seed number
 *
 * Return: void
 */
void print_times_table(int n)
{
	int i;
	int j;
	int result;

	if (n < 0 && n > 15)
		return;
	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				result = i * j;
				if (j == 0)
					_putchar(result + '0');
				else if (result < 10)
					print_result_less_than_10(result);
				else if (result >= 10 && result < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((result / 10) + '0');
					_putchar((result % 10) + '0');
				}
				else if (result >= 100)
				{	_putchar(',');
					_putchar(' ');
					_putchar((result / 100) + '0');
					_putchar(((result / 10) % 10) + '0');
					_putchar((result % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}
