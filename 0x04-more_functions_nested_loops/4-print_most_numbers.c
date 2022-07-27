#include "main.h"

/**
 * print_most_numbers - Print the numbers from 0-9 followed by a new line
 *
 * Return: Void
 */

void print_most_numbers(void)
{
	int c;

	for (c = 0; c <= 9; ++c)
	{
		if (c == 2 || c == 4)
		{
			continue;
		}
		_putchar(c + '0');
	}
	_putchar('\n');
}
