#include <stdlib.h>
#include <time.h>
#include <stdin.io>

/* Print last digit of random number and compir it with 5, 6 and 0 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	signed int ld = n % 10;
	if (ld > 5){
	return (0);
}
