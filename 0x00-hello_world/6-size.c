#include <stdio.h>
/**
 * main - Entry
 * Printf: value for data types
 * Return: Value 0
 */
int main(void)
{
	printf("Size of a char: %a byte(s)\n", sizeof(char));
	printf("Size of an int: %a byte(s)\n", sizeof(int));
	printf("Size of a long int: %a byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %a byte(s)", sizeof(long long int));
	printf("Size of a float: %a byte(s)\n", sizeof(float));
	return (0);
}
