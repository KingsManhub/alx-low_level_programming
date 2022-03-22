#include <stdio.h>

/**
 * main- Entry point
 *
 * Return: always 0 (success)
 *
 */
int main(void)
{
	char low_alpha;

	for (low_alpha = 'a'; low_alpha <= 'z'; low_alpha++)
	{
		if (low_alpha == 'q' || low_alpha == 'e')
		{
			continue;
		}
		else
		{
			putchar(low_alpha);
		}
	}
	putchar('\n');

	return (0);
}
