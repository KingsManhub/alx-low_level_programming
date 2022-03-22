#include <stdio.h>

/**
 * main- Entry point
 *
 * Return: always 0 (success)
 *
 */
int main(void)
{
	int num;

	for (num = 48; num <= 55; num++)
	{
		int incr_num;

		for (incr_num = num + 1; incr_num <= 56; incr_num++)
		{
			int dou_incr_num;

			for (dou_incr_num = incr_num + 1; dou_incr_num <= 57; dou_incr_num++)
			{
				putchar(num);
				putchar(incr_num);
				putchar(dou_incr_num);
				if (num == 55)
				{
					break;
				}
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
