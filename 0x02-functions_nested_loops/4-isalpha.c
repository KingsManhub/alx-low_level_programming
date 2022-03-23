#include "main.h"

/**
 * _isalpha- Entry point
 * @c: is a parameter
 *
 * Return: always 0 when function false or 1 when function true
 *
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
