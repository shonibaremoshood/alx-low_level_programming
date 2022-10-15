#include <stdlib.h>
#include <time.h>
/* betty style doc for function main goes there */

/* more headers goes there */
/**
 * main - prints either a number is negative, postive or zero
 * Return: Value 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n < 0)
	{
		printf("%i is negative\n", n);
	}
	else if (n > 0)
	{
		printf("%i is positive\n", n);
	}
	else
	{
		printf("%i is zero\n", n);
	}

	return (0);
}
