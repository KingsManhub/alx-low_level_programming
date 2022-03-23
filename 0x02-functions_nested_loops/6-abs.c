#include "main.h"
#include <stdio.h>

/**
 * _abs- Entry point
 * @c: c is a parameter
 *
 * Return: always 0 (success)
 *
 */
int _abs(int c)
{
	int result;

	if (c < 0)
	{
		result = -1 * c;
		return (result);
	}
	else if (c == 0)
	{
		return (0);
	}
	else
	{
		return (c);
	}
}
