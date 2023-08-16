#include <stdio.h>

/**
 * main - By considering the terms in the Fibonacci sequence whose values do
 * not exceed 4,000,000, write a program that finds and prints the sum of
 * the even-valued terms, followed by a new line.
 *
 * Return: Always return success.
 */
int main(void)
{
	long int num1 = 0;
	long int num2 = 1;
	long int sum = 0;
	long int evensum = 0;

	while (sum <= 4000000)
	{
		sum = num1 + num2;
		num1 = num2;
		num2 = sum;
		if ((sum % 2) == 0)
			evensum += sum;
	}
	printf("%ld\n", evensum);
	return (0);
}
