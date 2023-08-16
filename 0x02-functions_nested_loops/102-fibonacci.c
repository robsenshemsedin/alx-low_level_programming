#include <stdio.h>

/**
 * main - Printing the farst 50 fibonacci numbers.
 *
 * Return: Always return 0.
 */
int main(void)
{
	long int num1 = 0;
	long int num2 = 1;
	int i = 1;

	while (i <= 50)
	{
		long int sum = 0;

		sum = num1 + num2;
		printf("%ld, ", sum);
		num1 = num2;
		num2 = sum;
		i++;
	}
	printf("\n");
	return (0);
}
