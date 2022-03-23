#include "main.h"

/**
 * jack_bauer- Entry point
 *
 * Return: it's void, so it's returning nothing
 */
void jack_bauer(void)
{
	int hr;
	int sec;

	for (hr = 0; hr <= 23; hr++)
	{
		for (sec = 0; sec <= 59; sec++)
		{
			_putchar(hr / 10 + '0');
			_putchar(hr % 10 + '0');
			_putchar(':');
			_putchar(sec / 10 + '0');
			_putchar(sec % 10 + '0');
			_putchar('\n');
		}
	}
}
