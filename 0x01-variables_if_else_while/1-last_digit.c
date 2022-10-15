#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - prints if the last digit of number is >5 or less than 6
 * Return: Value 0
 */
int main(void)
{
	int n;

	int last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	last_digit = n % 10;

	if (last_digit > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, last_digit);
	}
	else if (last_digit == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, last_digit);
	}
	else if (last_digit < 0)
	{
		last_digit *= 1;
		printf("Last digit of %d is %d and is less than 6\n", n, last_digit);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6\n", n, last_digit);
	}
	return (0);
}
