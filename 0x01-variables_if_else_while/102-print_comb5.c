#include <stdio.h>

/**
 * main- Entry point
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int num;

	for (num = 48; num <= 57; num++)
	{
		int snum;

		for (snum = 48; snum <= 57; snum++)
		{
			int tnum;

			for (tnum = 48; tnum <= 57; tnum++)
			{
				int fnum;

				for (fnum = 48; fnum <= 57; tnum++)
				{
					putchar(num);
					putchar(snum);
					putchar(' ');
					putchar(tnum);
					putchar(fnum);
					if (num == 57)
					{
						break;
					}
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
