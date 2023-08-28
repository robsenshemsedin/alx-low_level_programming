#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - a function that prints the sum of the two
 * diagonals of a square matrix of integers.
 * @a: Pointer to the first character of the two D array.
 * @size: Size of the two D array.
 *
 * Return: Void.
 */
void print_diagsums(int *a, int size)
{
	int row, column, sum1 = 0, sum2 = 0;

	for (row = 0; row < size; row++)
	{
		for (column = 0; column < size; column++)
		{
			if (column == row)
				sum1 += *(a + row * size + column);
		}
	}
	printf("%d, ", sum1);
	for (row = size - 1; row >= 0; row--)
	{
		for (column = 0; column < size; column++)
		{
			if (column == row)
				sum2 += *(a  + row * size + column);
		}
	}
	printf("%d", sum2);

}
