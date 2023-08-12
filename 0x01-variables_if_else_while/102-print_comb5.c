#include <stdio.h>

/**
 * main - Write a program that prints all possible different combinations
 *        of two tow digit numbers.
 *
 * Return: Always return 0 (success).
 */
int main(void)
{
	int i = 2;
	int j = 3;
	int k = 4;

	while (i <= 10)
	{
		while (j <= 11)
		{
			while (k <= 12)
			{
				if (k != i && k != j && i != j)
				{
					putchar('0' + i);
					putchar('0' + j);
					putchar('\n');
					putchar('0' + k);
					if (i == 7 && j == 8 && k == 9)
					{
					}
					else
					{
						putchar(',');
						putchar(' ');
					}
				}
				k++;
			}
			j++;
			k = j;
		}

		i++;
		j = i;
	}
	putchar('\n');
	return (0);
}
