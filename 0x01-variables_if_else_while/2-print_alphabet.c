#include <stdio.h>

/**
 * main- Entry point
 *
 * Return: always 0 (successful)
 *
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		putchar(alphabet);
	}
	putchar('\n');

	return (0);
}
