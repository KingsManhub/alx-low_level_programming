#include <stdio.h>

/**
 * main- Entry point
 *
 * Return: always  0 (success)
 *
 */
int main(void)
{
	int num;

	for (num = 48; num <= 56; num++)
	{
		int incr_num;

		for (incr_num = num + 1; incr_num <= 57; incr_num++)
		{
			putchar(num);
			putchar(incr_num);
			if (num == 56)
			{
				break;
			}
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
