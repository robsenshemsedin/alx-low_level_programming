#include <stdio.h>

/**
 * main - Write a program that prints all possible different combinations
 *        of two digits.
 *
 * Return: Always return 0 (success).
 */
int main(void)
{
	int i = 0;
	int j = 0;

	while (i <= 8)
	{
		while (j <= 9)
		{
			if (j != i)
			{
				putchar('0' + i);
				putchar('0' + j);
				if (i == 8 && j == 9)
				{
				}
				else
				{
					putchar(',');
					putchar(' ');
				}
			}
			j++;
		}

		i++;
		j = i;
	}
	putchar('\n');
	return (0);
}
