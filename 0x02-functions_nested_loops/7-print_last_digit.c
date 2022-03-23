#include "main.h"

/**
 * print_last_digit- Entry point
 * @n: parameter for print last digit function
 *
 * Return: always return a value
 *
 */

int print_last_digit(int n)
{
	int last_digit;

	if (n < 0)
	{
		n = _abs(n);
	}
	last_digit = n % 10;
	return (last_digit);
}
