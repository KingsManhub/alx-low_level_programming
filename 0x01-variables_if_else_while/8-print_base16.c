#include <stdio.h>

/**
 * main- Entry point
 *
 * Return: always 0 (success)
 *
 */
int main(void)
{
	int base_16_num;
	char base_16_alpha;

	for (base_16_num = 48; base_16_num <= 57; base_16_num++)
	{
		putchar(base_16_num);
	}
	for (base_16_alpha = 'a'; base_16_alpha <= 'f'; base_16_alpha++)
	{
		putchar(base_16_alpha);
	}
	putchar('\n');

	return (0);
}

