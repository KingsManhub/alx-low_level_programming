#include <stdio.h>

/**
 * main- Entry point
 *
 * Return: always 0 (success)
 *
 */
int main(void)
{
	char low_alphabet;
	char upper_alphabet;

	for (low_alphabet = 'a'; low_alphabet <= 'z'; low_alphabet++)
	{
		putchar(low_alphabet);

	}
	for (upper_alphabet = 'A'; upper_alphabet <= 'Z'; upper_alphabet++)
	{
		putchar(upper_alphabet);
	}
	putchar('\n');

	return (0);
}
