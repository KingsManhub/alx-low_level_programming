#include <stdio.h>

/**
 * main- Entry point
 *
 * Return: always 0 (success)
 *
 */
int main(void)
{
	int single_digit;

	for (single_digit = 0; single_digit <= 9; single_digit++)
	{
		printf("%i", single_digit);
	}
	printf("\n");

	return (0);
}
