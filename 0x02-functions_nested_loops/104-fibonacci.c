#include <stdio.h>
#define LIMIT 98

/**
 * main - Printing the farst 98 fibonacci numbers.
 *
 * Return: Always return 0.
 */
int main(void)
{
	unsigned long num1 = 0;
	unsigned long num2 = 1;
	unsigned long i = 1;

	while (i < LIMIT)
	{
		unsigned long sum = 0;

		sum = num1 + num2;
		if (i == (LIMIT - 1))
			printf("%lu", sum);
		else
			printf("%lu, ", sum);
		num1 = num2;
		num2 = sum;
		i++;
	}
	printf("\n");
	return (0);
}
