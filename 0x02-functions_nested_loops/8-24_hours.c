#include "main.h"

/**
 * jack_bauer - print all the minutes.
 *
 * Return: Return void.
 */
void jack_bauer(void)
{
	int h1 = 0;
	int h2 = 0;
	int m1 = 0;
	int m2 = 0;

	while (h1 < 3)
	{
		while ((h1 < 2 && h2 < 10) || (h2 < 4))
		{
			while (m1 < 6)
			{
				while (m2 < 10)
				{
					_putchar('0' + h1);
					_putchar('0' + h2);
					_putchar(':');
					_putchar('0' + m1);
					_putchar('0' + m2);
					_putchar('\n');
					m2++;
				}
				m2 = 0;
				m1++;
			}
			m1 = 0;
			h2++;
		}
		h2 = 0;
		h1++;
	}
}
