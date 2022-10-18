#include "main.h"
/**
 * print_alphabet - print letters from a-z in lower case
 * Return: Value void
 */
void print_alphabet(void)
{
	char lower_case;

	for (lower_case = 'a'; lower_case <= 'z'; lower_case++)
	{
		_putchar(lower_case);
	}
	_putchar('\n');
}
