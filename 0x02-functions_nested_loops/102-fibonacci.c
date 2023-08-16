#include <stdio.h>

/**
 * main - Printing the farst 50 fibonacci numbers.
 *
 * Return: Always return 0.
 */
int main(void)
{
	int num1 = 0;
	int num2 = 1;
	int i = 1;
	printf("%d, %d, ", 0, 1);
	while (i <= 50)
	{
		int sum = 0;
		sum = num1 + num2;
		printf("%d, ", sum);
		num1 = num2;
		num2 = i;
		i++;
	}
	printf("\n");
	return (0);
}
