#include <stdio.h>

/**
 * main - Write a program that prints all possible different combinations
 *        of three digits.
 *
 * Return: Always return 0 (success).
 */
int main(void)
{
	int i = 0;
	int j = 1;
	int k = 2;

	while (i <= 7)
	{
		while (j <= 8)
		{
			while (k <= 9)
			{
				if (k != i && k != j && i != j)
				{
					putchar('0' + i);
					putchar('0' + j);
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
