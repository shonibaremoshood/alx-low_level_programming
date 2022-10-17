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
		i++;
		printf("%d", i);
	}
	printf("\n");
	return (0);
}
