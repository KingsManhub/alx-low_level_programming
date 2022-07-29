#include "main.h"

/**
 * print_line - Draws a straight line in the terminal
 *
 * Return: Void
 */

void print_line(int n)
{
	for (; n >= 0; --n)
	{
		if (n == 0)
		{
			_putchar('$');
		}
		_putchar('_');
	}
	_putchar('\n');
}
