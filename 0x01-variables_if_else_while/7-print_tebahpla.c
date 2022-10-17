#include <stdio.h>
/**
 * main - print lower case in a reverse form
 * Return: Value 0
 */
int main(void)
{
	int letter;

	for (letter = 'z'; letter >= 'a'; letter--)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
