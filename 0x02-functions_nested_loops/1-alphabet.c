#include "main.h"

/**
 * main- Entry point
 *
 * Return: always 0 (success)
 *
 */

void print_alphabet(void)
{
	char ch;

	for (ch = 97; ch <= 122; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');

}
