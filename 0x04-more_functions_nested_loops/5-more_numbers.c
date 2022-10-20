#include <stdio.h>
#include "main.h"
/**
 * more_numbers - print numbers 10 times;
 * Return: Value 0.
 */
void more_numbers(void)
{
	char n;
	char counter;

	counter = '0';
	while (counter < 10)
	{

		for (n = 0; n <= 14; n++)
		{
			_putchar(n);
		}
		counter++;
		_putchar('\n');
	}
	_putchar('\n');
}
