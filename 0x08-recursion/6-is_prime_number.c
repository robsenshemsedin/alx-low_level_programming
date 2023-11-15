#include "main.h"
/**
* is_prime_number - true if the number is prime
*@n: input number
*
*Return: true if the number is prime
*/
int is_prime_number(int n)
{
	int first = n / 2;

	if (n <= 1)
		return (0);
	return (is_prime(n, first));
}

/**
* is_prime - 1 if n is prime
* @n: number to be checked
* @start:  start checking from
*
* Return: 1 if n is prime, 0 otherwise
*/

int is_prime(int n, int start)
{
	if (start <= 1)
		return (1);
	else if (n % start == 0)
		return (0);
	return (is_prime(n, start - 1));
}
