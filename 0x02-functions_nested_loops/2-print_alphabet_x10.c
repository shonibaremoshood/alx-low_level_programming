#include "main.h"
/**
 * print_alphabet_x10 - print all alphabet in lower case ten times
 */

void print_alphabet_x10(void)
{
	int counter = 0;
	char lower_case;

	while (counter++ < 10)
	{
		for (lower_case = 'a'; lower_case <= 'z'; lower_case++)
		{
			_putchar(lower_case);
		}
		_putchar('n');
	}
}
