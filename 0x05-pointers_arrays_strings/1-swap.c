#include "main.h"

/**
 * swap_int - Swap the value of two input integers.
 * @a: Memory address for first input.
 * @b: Memory address for the second input.
 *
 * Return: No return value.
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
