#include "main.h"

/**
 * more_numbers - Print 10 times the number from 0 - 14, following a new line.
 *
 * Return: Void
 */

void more_numbers(void)
{
	int count;
	int value;

	for (count = 1; count <= 10; ++count)
	{
		for (value = 0; value <= 14; ++value)
		{
			_putchar(value + '0');
		}
		_putchar('\n');
	}
}
