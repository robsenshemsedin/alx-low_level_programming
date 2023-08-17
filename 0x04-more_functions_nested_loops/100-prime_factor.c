#include <stdio.h>

/**
 * main - Finds and prints the largest prime factor
 * of the number 612852475143, followed by a new line.
 *
 * Return: Always return success.
 */
int main(void)
{
	unsigned long int f = 2;
	unsigned long int n = 612852475143;

	while (f <= n)
	{
		if ((n % f) == 0)
		{
			if (f == n)
			{
				break;
			}
			else
			{
				n = n / f;
				f = 2;
				continue;
			}
		}
		f++;
	}
	printf("%lu\n", f);
	return (0);
}
