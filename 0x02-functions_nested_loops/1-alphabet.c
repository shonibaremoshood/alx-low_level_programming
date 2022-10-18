#include "main.h"
/**
 * main - print letters from a-z in lower case
 */
int main(void)
{
	char lower_case;

	for (lower_case = 'a'; lower_case <= 'z'; lower_case++)
	{
		_putchar(lower_case);
	}
	_putchar('\n');
}
