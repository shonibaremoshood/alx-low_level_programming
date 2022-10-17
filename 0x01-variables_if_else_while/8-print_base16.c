#include <stdio.h>
/**
 * main - number of base16 in lower case
 * Return: 0
 */
int main(void)
{
	int num;
	char base;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');
	for (base = 'a'; base <= 'f'; base++)
		putchar(base);
	putchar('\n');
	return (0);
}
