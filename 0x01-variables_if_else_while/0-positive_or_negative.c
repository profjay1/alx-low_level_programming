#include <stdlib.h>
#include <time.h>
#include <stdlib.h>
/* more headers goes there */


/* betty style doc for function main goes there */

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{

	int n;


	srand(time(0));

	n = rand() - RAND_MAX / 2;

	/* your code goes there */

	if (n < 0)

		printf("%d is negative\n", n);

       	if (n == 0)

		printf("%u is zero\n", n);

	if
	{
		printf("%u is positive\n", n);
	}

	return ('0');
}
