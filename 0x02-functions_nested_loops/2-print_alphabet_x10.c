#include "main.h"

/**
 * print_alphabet_x10- Entry point
 *
 * Return: always 0 (success)
 *
 */
void print_alphabet_x10(void)
{
	char ch;
	int count;

	for (count = 1; count <= 10; count++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
	}
}
