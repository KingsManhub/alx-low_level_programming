#include "main.h"
#include <stdio.h>

/**
 * print_numbers - Prints out numbers from 0 to 9 followed by a new line
 *
 * Return: Void
 */

void print_numbers(void)
{
	char c;

	for (c = 48; c <= 57; ++c)
	{
		_putchar(c);
	}
	_putchar('\n');
}
