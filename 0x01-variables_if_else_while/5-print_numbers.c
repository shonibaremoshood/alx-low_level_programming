#include <stdio.h>
/**
 * main - prints number from 0-9
 * Return: Value 0
 */
int main(void)
{
	int i;

	i = 0;
	while (i < 10)
	{
		printf("%d", i);
		i = +1;
	}
	printf("\n");
	return (0);
}
