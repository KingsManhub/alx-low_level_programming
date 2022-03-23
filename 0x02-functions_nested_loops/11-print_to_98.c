#include "main.h"

/**
 * print_to_98- Entry point
 *
 * @n: parameter for print to 98 function
 *
 * Return: it's returning nothing since it's void
 *
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		for (n = n; n < 98; n++)
		{
			printf("%d, ", n);
		}
		printf("%d\n", 98);
	}
	else
	{
		for (n = n; n > 98; n--)
		{
			printf("%d, ", n);
		}
		printf("%d\n", 98);
	}
}
