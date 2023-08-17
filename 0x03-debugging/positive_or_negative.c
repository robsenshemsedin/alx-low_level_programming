#include <stdio.h>
#include "main.h"

/**
 * positive_or_negative - Check whether a number is positive or negative.
 * @i: input value.
 *
 * Return: Always return 0 (success)
 */
void positive_or_negative(int i)
{
	if (i > 0)
		printf("%d is positive\n", i);
	else if (i == 0)
		printf("%d is zero\n", i);
	else if (i < 0)
		printf("%d is negative\n", i);
}
