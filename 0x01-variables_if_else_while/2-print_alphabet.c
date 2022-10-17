#include <stdio.h>
/**
 * main - print lower case alphabet
 * Return: value 0
 */
int main(void)
{
	char lower_case;

	for (lower_case = 'a'; lower_case <= 'z'; lower_case++)
	{
		putchar(lower_case);
	}
	putchar('\n');
	return (0);
}
