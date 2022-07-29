#include "main.h"

/**
 * print_line - Draws a straight line in the terminal
 * @n - The number of straight lines to be drawn.
 *
 * Return: Void
 */

void print_line(int n)
{
	int i;
	for (i = 0; i < n; ++i)
	{
		if (i <= 0)
		{
			_putchar('\n');
		}
		_putchar('_');
	}
}
