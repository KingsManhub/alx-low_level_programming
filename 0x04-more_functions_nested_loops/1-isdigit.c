#include "main.h"
#include <stdio.h>

/**
 * _isdigit - takes a parameter to check if it was a string
 * @c - represent a character;
 * Return: Always 0.
 */

int _isdigit (int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
